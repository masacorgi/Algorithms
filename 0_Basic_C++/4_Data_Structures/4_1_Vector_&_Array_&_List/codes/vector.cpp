#include <bits/stdc++.h>
using namespace std;
vector<int> v;

int main(){
	for(int i=1; i<=10; i++) v.push_back(i);
	for(int a : v) cout << a << " ";
	cout << endl;
	
	for(int a : v) cout << a << " ";
	cout << endl;
	
	v.erase(v.begin(), v.begin()+3);
	for(int a : v) cout << a << " ";
	cout << endl;
	
	auto a = find(v.begin(), v.end(), 100);
	if(a == v.end()) cout << "not found" << endl;
	
	fill(v.begin(), v.end(), 10);
	for(int a : v) cout << a << " ";
	cout << endl;
	
	v.clear();
	cout << "아무도 없을까나리?" << endl;
	for(int a : v) cout << a << " ";
	cout << endl;
	
	return 0; 
}

