#include <bits/stdc++.h>
using namespace std;

int i;

int main(){
	cout << i << endl; 
	cout << &i << endl; 
	// 4����Ʈ int ���� i�� ù��° �޸�(ù��° ����Ʈ) ��ġ ���
	// &�� ������ �޸� �ּҸ� ��ȯ�Ѵ�. 
	
	i = 123;
	cout << &i << endl; // ���� ���� ���ص� �޸� �ּҴ� ������ �ʴ´�. 
}

