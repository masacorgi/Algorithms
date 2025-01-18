# Basic C++, Data Structures, Map & Set

   
알고리즘에 사용되는 C++의 자료구조 중 Map 과 Set을 공부하고 정리한 자료입니다.
   

index
- [Basic C++, Data Structures, Map \& Set](#basic-c-data-structures-map--set)
	- [1. Map](#1-map)
		- [1.1 사용 예시](#11-사용-예시)
		- [1.2 맵 사용시 주의점](#12-맵-사용시-주의점)
	- [2. unordered map](#2-unordered-map)
	- [3. Set](#3-set)
	- [4. Multiset](#4-multiset)



## 1. Map
고유한 키를 기반으로 key-value 쌍으로 이루어져있는 정렬된 연관 컨테이너.   
삽입할 때마다 정렬되어 항상 정렬된 상태이다.   
래드 - 블랙 트리(균형 이진트리)로 구현되어 있기 때문에 삽입, 삭제, 수정, 탐색에 O(logN)의 시간복잡도가 소요된다.   
   
고유한 키를 가져야 하기 때문에 키에 중복값이 들어갈 수 없다.   
자동으로 키를 기준 오름차순으로 정렬됨   
   
넣은 순서대로 map을 탐색하는 것이 아니라 키의 아스키코드순으로 정렬된 값들을 탐색하게 됨   
맵의 키와 값에는 string, int 등 다양한 값이 들어갈 수 있다.   

### 1.1 사용 예시
```c++
#include <bits/stdc++.h>
using namespace std;

map<string, int> mp;
string a[] = {"Shohei", "Jake", "Aguero"};

int main(){
	for(int i=0; i<3; i++){
		
		mp.insert( {a[i], i+1} ); // map에 삽입 {key, value} 
		mp[a[i]] = i+1; // value 값 변경 
		
	}
	
	cout << mp["Chapman"] << endl;
	
	mp["Chapman"] = 4;
	
	cout << mp.size() << endl; // map의 요소 수 size 
	
	mp.erase("Chapman"); // 해당 키에 해당하는 요소 삭제 
	
	auto it = mp.find("Chapman"); // 해당 키에 해당하는 요소의 이터레이터 반환, 없을 시 end() 이터레이터 반환 
	if(it == mp.end()){
		cout << "There's no value with that key" << endl;
	}
	
	mp["Chapmen"] = 100;
	if(it != mp.end()){
		cout << (*it).first << " : " << (*it).second << endl;
	}
	
	for(auto it : mp){
		cout << (it).first << " : " << (it).second << endl;
	}
	for(auto it= mp.begin(); it != mp.end(); it++){
		cout << (*it).first << " : " << (*it).second << endl;
	}
	
	mp.clear(); // 모든 요소 삭제 
	
	return 0;
	
}

```
### 1.2 맵 사용시 주의점
map은 해당 인덱스를 참조만 해도 맵의 요소가 생성된다.   
참조했는데 해당 키가 없으면 0 or 빈 문자열로 초기화되어 할당됨   
   
할당하고 싶지 않아도 []로 참조할 경우 자동으로 요소가 추가되기때문에 조심해야됨.   
   
다음과 같이 맵에 요소가 있는지를 확인하고 맵에 요소를 할당하는 로직을 사용해야 함.   
```c++
map<int, int> mp;

if(mp[1] == 0){ // 이 순간 mp[1]이 생성됨
  mp[1] = 2;
}

if(mp.find(33) == mp.end()){ // mp[33]이 생성되지 않는다.
  mp[33] = 7368;
}

for(auto i : mp){
  cout << i.first << " : " << i.second << endl;        
}
```

## 2. unordered map
map은 키가 자동으로 오름차순으로 정렬되지만 unordered_map은 정렬이 되지 않는 맵이다.   
메서드는 map과 동일   

||map|unordered_map|
|------|---|---|
|자동정렬|됨|안됨|
|구조|Red-Black Tree|Hash-Table|
|탐색, 삽입, 삭제 시간복잡도|평균 O(logN)|평균 O(1), 최악의 경우 O(N)|

<br>

## 3. Set
고유한 요소만을 저장하는 컨테이너. 중복 허용 X   
map 처럼 {key, value}로 insert하지 않아도 되고, pair, int형을 집어넣어서 만들수 있음   
중복된 값은 제거되고, map과 같이 자동 정렬.   
메서드는 map과 같다.   

<br>



## 4. Multiset

multiset은 중복된 요소도 집어넣을 수 있는 자료구조.   
key, value로 집어넣을 필요X, 자동적으로 정렬   
메소드는 map과 같음   




<br>