#include <bits/stdc++.h>
using namespace std;

int main(){
	deque<int> dq;
	
	dq.push_front(1); // deque.push_front(요소) 디큐 맨 앞에 요소 추가 
	dq.push_back(2); // deque.push_back(요소) 디큐 맨 뒤에 요소 추가 
	dq.push_back(3);
	
	cout << "dq.front() : " << dq.front() << endl; // deque.front() 디큐 맨 앞 요소 참조 
	cout << "dq.back() : " << dq.back() << endl; // deque.back() 디큐 맨 뒤 요소 참조 
	cout << "dq.size() : " << dq.size() << endl; // deque.size() 디큐 크기(요소 수) 반환 
	
	dq.pop_back(); // deque.pop_back() 디큐 맨 뒤 요소 삭제 
	dq.pop_front(); // deque.pop_front() 디큐 맨 앞 요소 삭제 
	
	cout << "dq.size() : " << dq.size() << endl;
	
	return 0;
}

