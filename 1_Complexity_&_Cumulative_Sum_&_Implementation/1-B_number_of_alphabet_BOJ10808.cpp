// 단어 S가 주어지고, 알파벳 소문자로만 이루어짐
// 각 알파벳이 단어에 몇개가 포함되어 있는지 구하라
// 출력예시 : 11001000011001200000000000
 
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

