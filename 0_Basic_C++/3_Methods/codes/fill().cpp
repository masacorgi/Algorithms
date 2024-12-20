#include <bits/stdc++.h>
using namespace std;
int a[10];
int b[10][10];

int main(){
	fill(&a[0], &a[10], 100); // 시작값, 끝값+1, 넣을 값
	// 끝값은 포함하지 않기 때문에 마지막인 a[9] 다음값인 a[10]을 넣는다. 
	for(int i=0; i<10; i++){ // 출력 
		cout << a[i] << " ";
	}
	cout << endl;
	
	//2중배열 초기화 
	fill(&b[0][0], &b[0][0]+10*10, 2);
	for(int i=0; i<10; i++){ // 출력 
		for(int j=0; j<10; j++){
			cout << b[i][j] << " ";
		}
		cout << endl;
	}
	
	//1차원의 경우 배열이름 + 숫자로 초기화할 수 있다.
	fill(a, a+10, 7);
	for(int i=0; i<10; i++){
		cout << a[i] << " ";
	}
}

