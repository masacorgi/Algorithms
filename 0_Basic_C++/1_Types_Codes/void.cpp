#include <bits/stdc++.h>
using namespace std;

int ret = 1; // �������� ���� 

void a(){
	ret = 2; // �������� ret�� ���� 2�� ���� 
	cout << ret << endl;
	return;
}
int main(){ 
	cout << ret << endl; 
	a();
	cout << ret << endl;
	return 0;
}
