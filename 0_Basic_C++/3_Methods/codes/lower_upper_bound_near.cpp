#include <bits/stdc++.h>
using namespace std;
vector<int> v;

int main(){
	for(int i=2; i<=5; i++) v.push_back(i);
	v.push_back(7); // v == {2,3,4,5,7}
	
	cout << upper_bound(v.begin(), v.end(), 6) - v.begin() << endl;
	//4
	
	cout << lower_bound(v.begin(), v.end(), 6) - v.begin() << endl;
	//4
	
	cout << upper_bound(v.begin(), v.end(), 9) - v.begin() << endl;
	//5
}

