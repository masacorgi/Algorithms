// 크기가 NxN인 도시. 각 칸은 빈칸(0), 집(1), 치킨집(2)
// '치킨거리'는 집(x1,y1)에서 치킨집(x2,y2)까지의 거리 |x1-x2|+|y1-y1|

// '도시의 치킨거리'는 각 집의 최소치킨거리의 합이다.
// M개의 치킨집의 개수가 주어지고, 이는 도시에 유지할 치킨집의 최댓값이다.
// 나머지는 폐업한다. 
 
// 폐업시키지 않을 치킨집을 최대 M개 골랐을 때, 도시의 치킨거리의 최댓값을 출력하라 

#include <bits/stdc++.h>
using namespace std;

int n, m, a[54][54], result = 987654321; 
vector<vector<int>> chicken_index_lists;
vector<pair<int,int>> home_coordinates, chicken_coordinates;

void make_combination(int start, vector<int> v){
	if(v.size() == m){
		chicken_index_lists.push_back(v);
		return;
	}
	for(int i=start+1; i<chicken_coordinates.size(); i++){
		v.push_back(i);
		make_combination(i,v);
		v.pop_back();
	}
	return;
}

int main(){
	cin >> n >> m;
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cin >> a[i][j];
			if(a[i][j]==1) home_coordinates.push_back({i,j});
			if(a[i][j]==2) chicken_coordinates.push_back({i,j});
		}
	}
	
	vector<int> v;
	make_combination(-1,v);
	
	for(vector<int> chicken_index_list : chicken_index_lists){ // 생성한 조합 하나씩 반복  
		int ret = 0; // 도시 치킨거리
		
		for(pair<int, int> home : home_coordinates ){ // 집 하나씩 반복 
			int _min = 987654321;
			
			for(int chicken_index : chicken_index_list){ // 치킨집 하나씩 반복
				int distance = abs(home.first - chicken_coordinates[chicken_index].first) + abs(home.second - chicken_coordinates[chicken_index].second); 
				//거리 계산 
				_min = min(_min, distance); // 최킨거리중 최솟값 선택 
			}
			
			ret += _min; // '도시의 치킨거리'에 더함 
		}
		result = min(result, ret);
		// 계산된 '도시의 치킨거리'값이 최솟값이 되게 설정 
	}
	cout << result << '\n'; // 최솟값이 된 '도시의 치킨거리' 출력 
	
	return 0; 
}

