#include <bits/stdc++.h>
using namespace std;

vector<int> a {1,2,3,3,4,100};

int main(){
	cout << *(lower_bound(a.begin(), a.end(), 4)-1) << endl; //3
	cout << *upper_bound(a.begin(), a.end(), 4) << endl; //100
	return 0;
}

