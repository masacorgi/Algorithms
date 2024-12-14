#include <bits/stdc++.h>
using namespace std;

int T;
string s;

int main(){
	cin >> T; // 입력받을 갯수 입력
	string bufferflush;
	getline(cin, bufferflush); // cin으로 정수 입력 후 남은 \n 버리기 
	
	for(int i=0; i<T; i++){
		getline(cin, s);
		cout << s << '\n';
	}
}
