#include <bits/stdc++.h>
using namespace std;
int i;
string s = "hello";
int main(){
	i=0; 
	int * a = & i;
	
	cout << a << endl; //i의 주솟값 출력
	
	string * b = &s;
	cout << b << endl; //s의 주솟값 출력
	
	return 0; 
}

