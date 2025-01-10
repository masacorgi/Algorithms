#include <bits/stdc++.h>
using namespace std;
// 난쟁이 7명의 키의 합 : 100
// 아홉개의 줄에 난쟁이 9명의 키가 입력
// 7명의 난쟁이를 찾아 키를 오름차순으로 출력하라 
// 가능한 답이 여러개일 경우 아무거나 정답

int a[9];
 
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	for(int i=0; i<9; i++){
		cin >> a[i];
	}
	
	sort(a, a+9);
	
	do{
		int sum = 0;
		for(int i=0; i<7; i++){
			sum += a[i];
		}
		if(sum==100){
			break;
		}
	}while(next_permutation(a, a+9));
	
	for(int i=0; i<7; i++){
		cout << a[i] << "\n";
	}
	return 0;
}

