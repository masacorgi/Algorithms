#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	vector<int> a {1,2,3,3,3,4};
	
	cout << lower_bound(a.begin(), a.end(), 3) - a.begin() << endl; //2
	cout << upper_bound(a.begin(), a.end(), 3) - a.begin() << endl; //5
	
	return 0;
}

