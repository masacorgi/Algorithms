#include <bits/stdc++.h>
using namespace std;

void printConstRef( const int& x){
	//x = 100; // ���� �߻� 
	cout << "Ref " << x << endl;
}

void printConstRef2( int& x){ // ��¥ x�� ��ġ�� ������ 
	x = 100; // ��¥ x�� ���� �ٲ� 
	cout << "Ref2 " << x << endl;
}
void printConstRef3( int x){ // ��¥ x�� �ƴ� �Ű������� ����� ���� ������
	x = 200;  // �Լ� �������� ���, ��¥ x�� �ǵ帮�� ���� 
	cout << "Ref3 " << x << endl;
}
int main(){
	int x = 10;
	printConstRef(x);
	cout << x << endl;
	
	printConstRef2(x);
	cout << x << endl;
	
	printConstRef3(x);
	cout << x << endl;
	
	return 0; 
}

