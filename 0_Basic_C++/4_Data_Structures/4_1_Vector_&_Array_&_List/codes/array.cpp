#include <bits/stdc++.h>
using namespace std;

int a[3] = {1,2,3};
int a2[] = {1,2,3,4};
int a3[10];

int main(){
	for(int i=0; i<3; i++) cout << a[i] << ' ';
	cout << endl;
	
	for(int i : a) cout << i << ' ';
	cout << endl;
	
	for(int i=0; i<4 ; i++) cout << a2[i] << ' ';
	cout << endl;
	
	for(int i: a2) cout << i << ' ';
	cout << endl;
	
	for(int i=0; i<10; i++) a3[i] = i;
	cout << endl;
	
	for(int i : a3) cout << i << ' ';
	
	return 0;
}

