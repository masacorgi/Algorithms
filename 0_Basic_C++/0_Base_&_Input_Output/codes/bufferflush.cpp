#include <bits/stdc++.h>
using namespace std;

int T;
string s;

int main(){
	cin >> T; // �Է¹��� ���� �Է�
	string bufferflush;
	getline(cin, bufferflush); // cin���� ���� �Է� �� ���� \n ������ 
	
	for(int i=0; i<T; i++){
		getline(cin, s);
		cout << s << '\n';
	}
}
