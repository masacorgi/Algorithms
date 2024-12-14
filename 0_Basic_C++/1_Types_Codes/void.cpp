#include <bits/stdc++.h>
using namespace std;

int ret = 1; // 전역변수 선언 

void a(){
	ret = 2; // 전역변수 ret의 값을 2로 변경 
	cout << ret << endl;
	return;
}
int main(){ 
	cout << ret << endl; 
	a();
	cout << ret << endl;
	return 0;
}
