#include <bits/stdc++.h>
using namespace std;
int i;
string s = "hello";
int main(){
	i=0; 
	int * a = & i;
	
	cout << a << endl; //i�� �ּڰ� ���
	
	string * b = &s;
	cout << b << endl; //s�� �ּڰ� ���
	
	return 0; 
}

