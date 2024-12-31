#include <bits/stdc++.h>
using namespace std;

int add(int &n1, int n2){
	n1+=10;
	cout << "add().n1: " << n1 << endl;
	return n1 + n2;
}
int main(){
	int a = 1;
	int b = 2;
	cout << "a : " << a << endl;
	
	int sum = add(a,b);
	cout << "add(a,b) : " << sum << endl;
	
	cout << "a : " << a << endl;
	
	return 0;
}

