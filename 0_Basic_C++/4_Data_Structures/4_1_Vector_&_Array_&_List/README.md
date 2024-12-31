# Basic C++, Data Structures(Vector & Array & List)

알고리즘 풀이에 사용되는 다양한 C++의 자료구조 중 Vector, Array, List를 공부하고 정리한 자료입니다.

<br>

index

- [Basic C++, Data Structures(Vector \& Array \& List)](#basic-c-data-structuresvector--array--list)
  - [1. Vector](#1-vector)
    - [1.1. push\_back()](#11-push_back)
    - [1.2. pop\_back()](#12-pop_back)
    - [1.3. erase()](#13-erase)
    - [1.4. fine(from, to, value)](#14-finefrom-to-value)
    - [1.5. clear()](#15-clear)
    - [1.6. fill(from, to, value)](#16-fillfrom-to-value)
    - [1.7. 범위기반 for loop](#17-범위기반-for-loop)
    - [1.8. vector 정적할당](#18-vector-정적할당)
    - [1.9. vector의 2차원 배열](#19-vector의-2차원-배열)
  - [2. Array](#2-array)
    - [2.1. 2차원 배열과 탐색](#21-2차원-배열과-탐색)
  - [3. List](#3-list)
    - [3.1 싱글 연결리스트](#31-싱글-연결리스트)
    - [3.2 이중 연결리스트](#32-이중-연결리스트)
    - [3.3 원형 연결리스트](#33-원형-연결리스트)
    - [3.4. push\_front(value)](#34-push_frontvalue)
    - [3.5 push\_back(value)](#35-push_backvalue)
    - [3.6 insert(idx, value)](#36-insertidx-value)
    - [3.7 erase(idx)](#37-eraseidx)
    - [3.8 pop\_front()](#38-pop_front)
    - [3.9 pop\_back()](#39-pop_back)
    - [3.10 front()](#310-front)
    - [3.11 back()](#311-back)
    - [3.12 clear()](#312-clear)
  - [4. Array vs List](#4-array-vs-list)


<br>
<br>
<br>

## 1. Vector
Vector는 동적으로 요소를 할당할 수 있는 동적배열이다.   
컴파일 시기에 사용해야 할 요소들의 개수가 명확하지 않다면 array가 아닌 vector를 써야함   
   
탐색, 맨 뒤나 앞 요소의 삭제, 삽입에 O(1)의 시간복잡도,   
중간 요소의 삭제, 삽입에 O(n)의 시간복잡도를 가짐   

```c++
vector<Type> name; // 선언
```
   
**vector 사용 예시**
```c++
vector<int> v;

int main(){
	for(int i=1; i<=10; i++) v.push_back(i);
	for(int a : v) cout << a << " ";
	cout << endl;
	
	v.pop_back();
	for(int a : v) cout << a << " ";
	cout << endl;
	
	v.erase(v.begin(), v.begin()+3);
	for(int a : v) cout << a << " ";
	cout << endl;
	
	auto a = find(v.begin(), v.end(), 100);
	if(a == v.end()) cout << "not found" << endl;
	
	fill(v.begin(), v.end(), 10);
	for(int a : v) cout << a << " ";
	cout << endl;
	
	v.clear();
	cout << "아무도 없을까나리?" << endl;
	for(int a : v) cout << a << " ";
	cout << endl;
	
	return 0; 
}

```

### 1.1. push_back()
뒤에서부터 요소 더하기. 같은 기능을 하는 emplace_back()도 있음
<br>

### 1.2. pop_back()
vector 맨 뒤의 요소를 지움(반환 x)
<br>

### 1.3. erase()
한 요소만 지울 시 해당 위치의 파라미터만 전달,
번위를 지우고 싶다면 [from, to)로 이터레이터를 전달할 것

```
[ ]은 포함하는 구간, ( )은 포함하지 않는 구간을 의미함
ex. [1,3) -> 1,2
(8, 9, 10, 11] -> 9, 10, 11
```
<br>

### 1.4. fine(from, to, value)
vector의 메소드가 아닌 STL 함수.   
[from, to)에서 value를 찾음. O(n)의 시간복잡도   

<br>

### 1.5. clear()
vector의 모든 요소를 삭제
<br>

### 1.6. fill(from, to, value)
vector 내의 모든 요소를 value 값으로 할당.   
[from, to) 구간의 value를 초기화
<br>

### 1.7. 범위기반 for loop
C++ 11 부터 범위기반 for loop 사용가능.   
vector, array, map 모두 사용가능하다.   
```c++
vector<int> v {1,2,3};

int main(){
    // 기본적인 for loop
	for(int i=0; i<v.size(); i++) cout << v[i] << ' ';
	cout << endl;
    
    // 범위기반 for loop. 같은 동작
	for(int a : v) cout << a << " ";
	cout << endl;
	
	
	vector<pair<int,int>> v2 = {{1,2},{3,4}};
    // vector안에 pair가 들어간다면 이를 명시해줘야함.

	for(pair<int,int> a : v2) cout << a.first << " ";
	cout << endl;

	for(auto a : v2) cout << a.second << " ";
    // 아니면 auto를 쓰던가..
}
```
<br>

### 1.8. vector 정적할당
vector라고 해서 무조건 크기가 0인 빈 벡터를 만들어 동적할당으로 요소를 추가하는 것은 아님.   
   
미리 값을 넣어 생성할 수 있다.
```c++
vector<int> v {1,2,3,4,5};
vector<int> v2(5, 100); // 크기가 5인 배열을 100으로 채워서 선언
```
<br>

### 1.9. vector의 2차원 배열
3가지 방법으로 2차원 벡터를 선언할 수 있다.
```c++
vector<vector<int>> v; // 모양만 선언
vector<vector<int>> v2(10, vector<int>(10,0)); // 사이즈와 초기화까지 선언. 사이즈 10x10, 0으로 초기화

vector<int> v3[10]; // int 벡터 10개짜리의 '배열'

int main(){
	for(int i=0; i<10; i++){
		vector<int> temp;
		v.push_back(temp);
	}
}
```

<br>

## 2. Array
110p
### 2.1. 2차원 배열과 탐색

## 3. List
### 3.1 싱글 연결리스트
### 3.2 이중 연결리스트
### 3.3 원형 연결리스트

**원형 싱글 연결리스트**   

**원형 이중 연결리스트**   

### 3.4. push_front(value)
### 3.5 push_back(value)
### 3.6 insert(idx, value)
### 3.7 erase(idx)
### 3.8 pop_front()
### 3.9 pop_back()
### 3.10 front()
### 3.11 back()
### 3.12 clear()

## 4. Array vs List