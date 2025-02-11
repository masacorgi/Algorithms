#include <bits/stdc++.h>
using namespace std;
// 난쟁이 7명의 키의 합 : 100
// 아홉개의 줄에 난쟁이 9명의 키가 입력
// 7명의 난쟁이를 찾아 키를 오름차순으로 출력하라 
// 가능한 답이 여러개일 경우 아무거나 정답
int a[9];


int main(){
	int sum=0;
	for(int i=0; i<9; i++){
		cin >> a[i];
		sum += a[i];
	}
	sort(a, a+9);
	pair<int, int> no_dwarves;
	
	for(int i=0; i<9; i++){
		for(int j=0; j<i; j++){
			if(sum - a[i] - a[j] == 100){
				no_dwarves.first = a[i];
				no_dwarves.second = a[j];
			}
		}
	} 
	
	for(int i=0; i<9; i++){
		if(a[i]==no_dwarves.first || a[i]==no_dwarves.second){
			continue;
		}
		cout << a[i] << endl;
	}
	
}

