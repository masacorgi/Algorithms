#include <bits/stdc++.h>
using namespace std;

int i;

int main(){
	cout << i << endl; 
	cout << &i << endl; 
	// 4바이트 int 변수 i의 첫번째 메모리(첫번째 바이트) 위치 출력
	// &는 변수의 메모리 주소를 반환한다. 
	
	i = 123;
	cout << &i << endl; // 변수 값이 변해도 메모리 주소는 변하지 않는다. 
}

