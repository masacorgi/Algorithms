#include <bits/stdc++.h>
using namespace std;
// ������ 7���� Ű�� �� : 100
// ��ȩ���� �ٿ� ������ 9���� Ű�� �Է�
// 7���� �����̸� ã�� Ű�� ������������ ����϶� 
// ������ ���� �������� ��� �ƹ��ų� ����
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

