#include <bits/stdc++.h>
using namespace std;

list<int> a;

void print(list<int> li){
	for(auto it : li) cout << it << ' ';
	cout << endl;
}

int main(){
	for(int i=1; i<=3; i++) a.push_back(i); // �ڿ������� value�� ���� 
	for(int i=1; i<=3; i++) a.push_front(i);  // �տ������� value�� ����
	
	auto it = a.begin();
	it++;
	a.insert(it, 1000); //��Ҹ� ���°�� ���� 
	print(a);
	
	a.erase(it); // ���° ��Ҹ� ���� 
	print(a); 
	
	
	cout << "a.front() : " << a.front();// �� �� ��� ����
	cout << endl;
	 
	a.pop_front(); // �� �� ��� ���� 
	print(a);
	
	cout << "a.back() : " << a.back(); // �� �� ��� ���� 
	cout << endl;
	
	a.pop_back(); // �� �� ��� ���� 
	print(a);
	
	a.clear(); // ��� ��ü ���� 
	print(a);
	return 0;
}

