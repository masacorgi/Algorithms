#include <bits/stdc++.h>
using namespace std;

int main(){
	double ret = 1.2345;
	int n = 2;
	
	int a = (int)round( ret / double(n)); // round() -> �ݿø� 
	
	cout << a << endl; // 1
	
	return 0;
}

