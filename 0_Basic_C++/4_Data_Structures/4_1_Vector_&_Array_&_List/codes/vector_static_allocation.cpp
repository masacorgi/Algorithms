#include <bits/stdc++.h>
using namespace std;

vector<int> v(5,100); // 크기가 5인 벡터를 100으로 채워서 정적할당 후 전역변수로 시작 

int main(){
	for(int a : v) cout << a << " ";
	return 0;
}

