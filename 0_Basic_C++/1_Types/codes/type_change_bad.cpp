#include <bits/stdc++.h>
using namespace std;

int main(){
	vector<int> a = { 1, 2, 3};
	
	cout << a.size() - 10 << endl; // 18446744073709551609
	// vector's size() method returns unsigned int. occuring underflow error.
	cout << (int)a.size() - 10 << endl; // -7
	// good ~
	
	return 0;
}

