// ũ�Ⱑ NxN�� ����. �� ĭ�� ��ĭ(0), ��(1), ġŲ��(2)
// 'ġŲ�Ÿ�'�� ��(x1,y1)���� ġŲ��(x2,y2)������ �Ÿ� |x1-x2|+|y1-y1|

// '������ ġŲ�Ÿ�'�� �� ���� �ּ�ġŲ�Ÿ��� ���̴�.
// M���� ġŲ���� ������ �־�����, �̴� ���ÿ� ������ ġŲ���� �ִ��̴�.
// �������� ����Ѵ�. 
 
// �����Ű�� ���� ġŲ���� �ִ� M�� ����� ��, ������ ġŲ�Ÿ��� �ִ��� ����϶� 

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
	
	for(vector<int> chicken_index_list : chicken_index_lists){ // ������ ���� �ϳ��� �ݺ�  
		int ret = 0; // ���� ġŲ�Ÿ�
		
		for(pair<int, int> home : home_coordinates ){ // �� �ϳ��� �ݺ� 
			int _min = 987654321;
			
			for(int chicken_index : chicken_index_list){ // ġŲ�� �ϳ��� �ݺ�
				int distance = abs(home.first - chicken_coordinates[chicken_index].first) + abs(home.second - chicken_coordinates[chicken_index].second); 
				//�Ÿ� ��� 
				_min = min(_min, distance); // ��Ų�Ÿ��� �ּڰ� ���� 
			}
			
			ret += _min; // '������ ġŲ�Ÿ�'�� ���� 
		}
		result = min(result, ret);
		// ���� '������ ġŲ�Ÿ�'���� �ּڰ��� �ǰ� ���� 
	}
	cout << result << '\n'; // �ּڰ��� �� '������ ġŲ�Ÿ�' ��� 
	
	return 0; 
}

