#include <bits/stdc++.h>
using namespace std;
int b[10][10];
int main(){
	int *ptr = &b[0][0];
	int size = 10*10;
	
	for(int i=0; i<size; ++i){
		*(ptr + i) = 1; // �迭 b�� 1�� �ʱ�ȭ 
	}
	
	for(int i=0; i<10; i++){
		for(int j=0; j<10; j++){
			cout << *(b[i]+j) << " ";		
		}
	cout << endl;
	}
	
	return 0;
}

