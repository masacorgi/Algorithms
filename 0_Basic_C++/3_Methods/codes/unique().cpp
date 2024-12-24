#include <bits/stdc++.h>
using namespace std;

vector<int> v;

int main(){
	for(int i=1; i<=5; i++){
		v.push_back(i);
		v.push_back(i);
	}
	for(int i : v) cout << i << ' ';
	cout << endl;
	
	auto it = unique(v.begin(), v.end());
	cout << it - v.begin() << endl;
	
	for(int i : v) cout << i << ' ';
	cout << endl;
	return 0;
}

