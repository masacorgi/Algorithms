#include <bits/stdc++.h>
using namespace std;

int main(){
	string a = "abcdef";
	cout << "a: " << a << endl; //abcde
	
	reverse(a.begin(), a.end());
	cout << "a: " << a << endl; //edcba
	
	reverse(a.begin(), a.end());
	cout << "a: " << a << endl; //abcde
	
	reverse(a.begin()+3, a.end());
	cout << "a: " << a << endl; //abced
}

