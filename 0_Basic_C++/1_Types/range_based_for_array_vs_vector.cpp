#include <bits/stdc++.h>
using namespace std;

int n;

int main(){
	cin >> n;
	int a[n]; // n ũ�� �迭 ����
	
	memset(a, 0, sizeof(a)); // �迭 ���빰 0���� �ʱ�ȭ
	
	for(int i : a){
		cout << i << " ";
		// for�� ��Ÿ�� ���� ������ �ñ⿡ ũ�Ⱑ �������Ƿ� ��Ÿ�ӿ� ũ�⸦ ���ϴ� array�� ����ϸ� ���װ� �߻��Ѵ�. 
	} // ���� array�� ���� �ʹٸ� ���������� ũ�⸦ �����ϰ� ������� 
	
	vector<int> b(n,0);
	for(int i : b){
		cout << i << " "; // ��Ÿ�ӿ� ũ�⸦ �����ϰ� �ʹٸ� vector�� ������� 
	}
	
	return 0;
}

