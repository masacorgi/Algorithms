  # Basic C++, Data Structures, Stack & Queue & Deque

  알고리즘에 사용되는 C++의 자료구조 중 Stack, Queue, Deque를 공부하고 정리한 자료입니다.

  index
  
- [Basic C++, Data Structures, Stack \& Queue \& Deque](#basic-c-data-structures-stack--queue--deque)
  - [1. Stack](#1-stack)
  - [2.  Queue](#2--queue)
  - [3.  Deque](#3--deque)

<br>
<br>

## 1. Stack
Last In First Out 자료구조   
pop 하면 마지막으로 삽입한 요소가 나온다.   
   
재귀적인 함수와 알고리즘에서 사용된다.   
삽입 및 삭제에 O(1), 탐색에 O(n)의 시간복잡도가 소요됨   
n번째 요소를 찾아야 할때 계속해서 앞에 있는 요소를 n번 반복해야 끄집어 낼 수 있기에 O(n)의 탐색 시간 복잡도가 걸린다.   
   
주로 문자열 폭발, 아름다운 괄호 만들기, 짝찾기 키워드 기반 문제에서 사용할 수 있다.   
```c++
stack<string> stk;

stk.push("엄"); // 요소 삽입
stk.push("상");
stk.push("백");
stk.push("화");
stk.push("이");
stk.push("팅");
	
while(stk.size()){ // stack.size() 스택 크기(요소 수) 반환
	cout << stk.top() << endl; // 가장 마지막에 들어간 요소 탐색
	stk.pop(); // 가장 마지막에 들어간 요소 삭제
}
```
<br>

## 2.  Queue

First In First Out, 삽입 된 순서대로 먼저 들어간 요소가 먼저 나옴(스택과 반대)   
삽입 및 삭제에 O(1), 탐색에 O(n)이 소요됨   

```c++
queue<int> q;

for(int i=1; i<=10; i++) q.push(i); // queue.push(요소) 요소 삽입 
	
while(q.size()){ // queue.size() 큐의 크기(요소 수) 반환 
	cout << q.front() << ' '; // queue.front() 가장 앞의 요소 참조 
	q.pop(); // queue.pop() 가장 앞의 요소 삭제 
}
```

<br>

## 3.  Deque

queue와 다르게 앞뒤로 삽입, 삭제, 참조가 가능한 자료구조   
```c++
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
```

<br>