#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	vector<int> a {1,2,3,3,3,4};
	cout << &*lower_bound(a.begin(), a.end(), 3) - &*a.begin() << endl; //2
	
	vector<int> b {0,0,0,0};
	cout << &*(b.begin() + 3) - &*b.begin() << endl; //3
	
	return 0;
}

