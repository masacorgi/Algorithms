#include <bits/stdc++.h>
using namespace std;

int main(){
	char a = 'a';
	cout << (int)'z' << endl;
	cout << (int)a << endl; // 97
	cout << (int)a - 97 << endl; // 0
	cout << (int)a - 'a' << endl;// 0
	
	a = 'z';
	cout << (int)a << endl; //122
	cout << (int)a - 97 << endl; // 25
	cout << (int)a -'a' << endl;// 25
	// (int)'a' : 97 ~ (int)'z' : 122
}

