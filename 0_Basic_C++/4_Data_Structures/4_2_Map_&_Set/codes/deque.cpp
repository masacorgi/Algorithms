#include <bits/stdc++.h>
using namespace std;

int main(){
	deque<int> dq;
	
	dq.push_front(1); // deque.push_front(���) ��ť �� �տ� ��� �߰� 
	dq.push_back(2); // deque.push_back(���) ��ť �� �ڿ� ��� �߰� 
	dq.push_back(3);
	
	cout << "dq.front() : " << dq.front() << endl; // deque.front() ��ť �� �� ��� ���� 
	cout << "dq.back() : " << dq.back() << endl; // deque.back() ��ť �� �� ��� ���� 
	cout << "dq.size() : " << dq.size() << endl; // deque.size() ��ť ũ��(��� ��) ��ȯ 
	
	dq.pop_back(); // deque.pop_back() ��ť �� �� ��� ���� 
	dq.pop_front(); // deque.pop_front() ��ť �� �� ��� ���� 
	
	cout << "dq.size() : " << dq.size() << endl;
	
	return 0;
}

