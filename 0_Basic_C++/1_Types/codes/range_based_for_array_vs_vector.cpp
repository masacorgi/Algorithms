#include <bits/stdc++.h>
using namespace std;

int n;

int main(){
	cin >> n;
	int a[n]; // n 크기 배열 선언
	
	memset(a, 0, sizeof(a)); // 배열 내용물 0으로 초기화
	
	for(int i : a){
		cout << i << " ";
		// for는 런타임 이전 컴파일 시기에 크기가 정해지므로 런타임에 크기를 정하는 array를 사용하면 버그가 발생한다. 
	} // 굳이 array를 쓰고 싶다면 전역변수로 크기를 고정하고 사용하자 
	
	vector<int> b(n,0);
	for(int i : b){
		cout << i << " "; // 런타임에 크기를 변경하고 싶다면 vector를 사용하자 
	}
	
	return 0;
}

