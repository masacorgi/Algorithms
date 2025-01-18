# Basic C++, Data Structures, Struct
알고리즘에 사용되는 C++의 자료구조 중 구조체를 공부하고 정리한 자료입니다.

index
- [Basic C++, Data Structures, Struct](#basic-c-data-structures-struct)
  - [1. 랄로 구조체](#1-랄로-구조체)
  - [2. Point 구조체](#2-point-구조체)
  - [3. 오버라이딩 vs 오버로딩](#3-오버라이딩-vs-오버로딩)
  - [4. 구조체 기반 sort 사용 시 주의점](#4-구조체-기반-sort-사용-시-주의점)
  - [5. sort()'s third parameter compare()](#5-sorts-third-parameter-compare)
  - [6. 3 member value sorting](#6-3-member-value-sorting)
  - [7. vector에 struct 넣고 sort](#7-vector에-struct-넣고-sort)

<br>
<br>

구조체는 c++ 기본 제공 자료구조가 아닌 개발자가 커스텀해서 사용하는 자료구조이다.   
커스텀하게 정렬을 추가하고 싶거나 문제에 필요한 자료구조에 a,b,c,d,e가 필요할 경우 사용

```c++
struct sss
{ // members or Field of structure
  char _name [10];
  int id[5];
  float salary;
}
```

<br>

## 1. 랄로 구조체

```c++
#include <bits/stdc++.h>
using namespace std;

struct Ralo{
	int a,b;
	double c,d,e;
};

void print_ralo_structure(Ralo ralo){
	cout << ralo.a << ' ' << ralo.b << ' ' << ralo.c << ' ' << ralo.c << ' ' << ralo.e << endl;
}
int main(){
	Ralo ralo = {1,1,1,1,1};
	print_ralo_structure(ralo);
	
	vector<Ralo> ret;
	ret.push_back(ralo);
	ret.push_back({1,2,3,4,5});
	ret.push_back({});
	ret.push_back({1,3});
	
	for(Ralo ralo : ret){
		print_ralo_structure(ralo);
	}
	
	return 0;
}
//1 1 1 1 1
//1 1 1 1 1
//1 2 3 3 5
//0 0 0 0 0
//1 3 0 0 0
```

<br>

## 2. Point 구조체


<br>

## 3. 오버라이딩 vs 오버로딩


<br>

## 4. 구조체 기반 sort 사용 시 주의점


<br>

## 5. sort()'s third parameter compare()


<br>

## 6. 3 member value sorting


<br>

## 7. vector에 struct 넣고 sort