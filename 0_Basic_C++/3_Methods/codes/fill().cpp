#include <bits/stdc++.h>
using namespace std;
int a[10];
int b[10][10];

int main(){
	fill(&a[0], &a[10], 100); // ���۰�, ����+1, ���� ��
	// ������ �������� �ʱ� ������ �������� a[9] �������� a[10]�� �ִ´�. 
	for(int i=0; i<10; i++){ // ��� 
		cout << a[i] << " ";
	}
	cout << endl;
	
	//2�߹迭 �ʱ�ȭ 
	fill(&b[0][0], &b[0][0]+10*10, 2);
	for(int i=0; i<10; i++){ // ��� 
		for(int j=0; j<10; j++){
			cout << b[i][j] << " ";
		}
		cout << endl;
	}
	
	//1������ ��� �迭�̸� + ���ڷ� �ʱ�ȭ�� �� �ִ�.
	fill(a, a+10, 7);
	for(int i=0; i<10; i++){
		cout << a[i] << " ";
	}
}

