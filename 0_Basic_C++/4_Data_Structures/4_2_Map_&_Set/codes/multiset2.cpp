#include <bits/stdc++.h>
using namespace std;

int main(){

	multiset<int> numbers = {1,2,3,3,4,5,5,5,6};
	
	//Ư�� ���� ������ ��
	int count_five = numbers.count(5);
	cout << "��� 5�� ����: " << count_five << endl;
	
	return 0; 
}

