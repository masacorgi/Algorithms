#include <bits/stdc++.h>
using namespace std;

vector<int> v {1,2,3};

int main(){
	for(int a : v) cout << a << " ";
	cout << endl;
	
	for(int i=0; i<v.size(); i++) cout << v[i] << ' ';
	cout << endl;
	
	vector<pair<int,int>> v2 = {{1,2},{3,4}};
	for(pair<int,int> a : v2) cout << a.first << " ";
	cout << endl;
	for(auto a : v2) cout << a.second << " ";
}

