#include <bits/stdc++.h>
using namespace std;

void printConstRef( const int& x){
	//x = 100; // 에러 발생 
	cout << "Ref " << x << endl;
}

void printConstRef2( int& x){ // 진짜 x의 위치를 가져옴 
	x = 100; // 진짜 x의 값을 바꿈 
	cout << "Ref2 " << x << endl;
}
void printConstRef3( int x){ // 진짜 x가 아닌 매개변수로 복사된 값을 가져옴
	x = 200;  // 함수 내에서만 사용, 진짜 x는 건드리지 않음 
	cout << "Ref3 " << x << endl;
}
int main(){
	int x = 10;
	printConstRef(x);
	cout << x << endl;
	
	printConstRef2(x);
	cout << x << endl;
	
	printConstRef3(x);
	cout << x << endl;
	
	return 0; 
}

