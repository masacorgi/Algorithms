#include <bits/stdc++.h>
using namespace std;

int a[5] = {1,2,3,4,5}; 
int temp[5];

int main(){
	
	memcpy(temp, a, sizeof(a)); // temp�� a ���� 
	
	for(int i : temp) cout << i << ' ';
	cout << endl;
	
	a[4] = 1000; // a �迭�� ���� 
	for(int i : a ) cout << i << ' ';
	cout << endl;
	
	memcpy(a, temp, sizeof(temp)); // ���� ���� ������ �ǵ��� 
	for(int i : a) cout << i << ' ';
	
	return 0;	
}

