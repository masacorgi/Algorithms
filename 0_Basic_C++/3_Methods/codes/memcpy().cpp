#include <bits/stdc++.h>
using namespace std;

int main(){
	int v[3] = {1,2,3};
	int ret[3];
	
	memcpy(ret, v, sizeof(v)); //����, ��߼ҽ�, ������
	
	cout << ret[0] << " " << ret[2] << endl;
	
	ret[0] = 100;
	cout << ret[0] << endl; // 100
	cout << v[1] << endl; // 2 memcpy�� �������� �߱⿡ ������ �ǵ帮�� �ʴ´�. 
}

