#include <bits/stdc++.h>
using namespace std;

int main(){
	string s = "1234";
	int num = stoi(s);
	
	cout << num; //1234
	
	string s2 = "hello";
	num = stoi(s2); // error
	
	cout << num;
	
	return 0;
}

