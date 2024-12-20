#include <bits/stdc++.h>
using namespace std;

const int max_n = 1004;
int a1[max_n];
int a2[max_n][max_n];
char a[max_n][max_n];

int main(){
	memset(a1, -1, sizeof(a1)); // 배열이름, 채울값, 배열크기
	memset(a2, 0, sizeof(a2));
	memset(a, 'K', sizeof(a));

	for(int i=0; i<10; i++){
		for(int j=0; j<10; j++) cout << a[i][j] << " ";
	}
	
	

	return 0; 
}

