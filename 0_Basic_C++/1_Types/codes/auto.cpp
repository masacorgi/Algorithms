#include <bits/stdc++.h>
using namespace std;

int main(){
	int a = 1;
	auto b = 2; // 2를 보고 자동으로 int로 설정해줌 
	cout << b << endl;
	
	
	vector<pair<int, int>> v = {{1, 1}, {2, 2}, {3,3}};
//	for(int i=1; i<=5; i++){
//		v.push_back({i, i});
//	}
 
	
	for(pair<int, int> it : v){
		cout << it.first << " : " << it.second << endl; 
	}
	
	for(auto it : v){ // vector v의 내용물을 보고 자동으로 pair<int,int>로 설정해줌. 
		cout << it.first << " : " << it.second << endl;
	}
}

