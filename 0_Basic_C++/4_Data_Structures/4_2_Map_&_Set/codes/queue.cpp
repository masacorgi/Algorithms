#include <bits/stdc++.h>
using namespace std;

queue<int> q;

int main(){
	for(int i=1; i<=10; i++) q.push(i); // queue.push(요소) 요소 삽입 
	
	while(q.size()){ // queue.size() 큐의 크기(요소 수) 반환 
		cout << q.front() << ' '; // queue.front() 가장 앞의 요소 참조 
		q.pop(); // queue.pop() 가장 앞의 요소 삭제 
	}
	
	return 0;
}

