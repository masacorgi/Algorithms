#include <bits/stdc++.h>
using namespace std;

int a[5] = {1,2,3,4,5}; 
int temp[5];

int main(){
	
	memcpy(temp, a, sizeof(a)); // temp에 a 복사 
	
	for(int i : temp) cout << i << ' ';
	cout << endl;
	
	a[4] = 1000; // a 배열은 수정 
	for(int i : a ) cout << i << ' ';
	cout << endl;
	
	memcpy(a, temp, sizeof(temp)); // 수정 이전 값으로 되돌림 
	for(int i : a) cout << i << ' ';
	
	return 0;	
}

