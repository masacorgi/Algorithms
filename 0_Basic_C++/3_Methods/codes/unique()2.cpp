#include <bits/stdc++.h>
using namespace std;
vector<int> v {1,1,2,2,3,3,5,6,7,8,9};
int main(){
	auto it = unique(v.begin(), v.end());
	
	for(int i : v) cout << i << ' ';
	cout << endl;
	for(int i=0; i< it-v.begin(); i++){
		cout << v[i] << ' ';
	}
	return 0;	
}

