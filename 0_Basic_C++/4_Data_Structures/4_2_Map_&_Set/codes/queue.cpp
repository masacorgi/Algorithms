#include <bits/stdc++.h>
using namespace std;

queue<int> q;

int main(){
	for(int i=1; i<=10; i++) q.push(i); // queue.push(���) ��� ���� 
	
	while(q.size()){ // queue.size() ť�� ũ��(��� ��) ��ȯ 
		cout << q.front() << ' '; // queue.front() ���� ���� ��� ���� 
		q.pop(); // queue.pop() ���� ���� ��� ���� 
	}
	
	return 0;
}

