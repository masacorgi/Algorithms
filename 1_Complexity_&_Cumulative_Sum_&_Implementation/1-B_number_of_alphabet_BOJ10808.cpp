// �ܾ� S�� �־�����, ���ĺ� �ҹ��ڷθ� �̷����
// �� ���ĺ��� �ܾ ��� ���ԵǾ� �ִ��� ���϶�
// ��¿��� : 11001000011001200000000000
 
#include <bits/stdc++.h>
using namespace std;

int alphabet[26];
 
int main(){
	string str;
	cin >> str;
	
	for(char word : str){
		alphabet[word-97] ++;
	}
	for(int i : alphabet){
		cout << i;
	}
}

