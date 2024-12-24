#include <bits/stdc++.h>
using namespace std;

int main(){
	vector<int> v {1,2,3};
	vector<int> ret(3);
	
	copy(v.begin(), v.end(), ret.begin());
	
	cout << ret[1] << endl;
	
	ret[1] = 100;
	cout << "ret[1] : " << ret[1] << endl;
	cout << "v[1] : " << v[1] << endl;
	
	return 0;
	 
}

