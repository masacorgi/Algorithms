#include <bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(false); // C의 printf,scanf과 C++의 iostream(cin, cout ..)의 동기화를 해제하고, c++ 의 입출력 스트림만 사용하겠다고 명시하는것. 속도가 빨라짐. 하지만 사용시 C스타일 입출력을 섞어쓰면 출력 순서가 보장되지 않는다. 
	cin.tie(NULL);// cin과 cout은 기본적으로 연결(tie) 되어있어 cin을 사용하면 자동으로 cout이 flush되어 출력버퍼를 비운다. 디버깅이 편하지만 끊으면 cin후 cout을 하지 않아 성능이 좋아짐.
	cout.tie(NULL);// cout은 다른 스트림과 연결되있지 않아서 할필요 없음 
	
	string a = "aaabbb";
	string b = a.substr(2); // 끝을 의미하는 두번째 인자가 없으면 끝까지 잘림 
	cout << "b: " << b << endl;
	return 0;
}

