// �� Ʈ���� ������ ���۽ð�, ���� �ð��� �־�����.
// Ʈ���� �Ѵ� ���������� ��� �ð��� A��, �δ�� B��, ����� C���� ������ �߻��Ѵ�.
// ��������� ���϶� (�Է����� �־����� �ð��� 1<t<100 �̴�.) 

#include <bits/stdc++.h>
using namespace std;

int a, b, c; 
pair<int, int> truck1;
pair<int, int> truck2;
pair<int, int> truck3;

 
int sum;

int main(){
	int time[100];
	
	cin >> a >> b >> c;
	cin >> truck1.first >> truck1.second;
	cin >> truck2.first >> truck2.second;
	cin >> truck3.first >> truck3.second;
	
	for(int i=truck1.first; i<=truck1.second; i++){
		time[i]++;
	}
	for(int i=truck2.first; i<=truck2.second; i++){
		time[i]++;
	}
	for(int i=truck3.first; i<=truck3.second; i++){
		time[i]++;
	}
	for(int i : time){
		cout << i << endl;
	}
	for(int i=0; i<100; i++){
		if(time[i]==3){
			cout <<"time "<< i << " : 3" << endl;
			sum += c;
		}else if(time[i]==2){
			cout <<"time "<< i << " : 2" << endl;
			sum += b;
		}else if(time[i]==1){
			cout <<"time "<< i << " : 1" << endl;
			sum += a;
		}
	}
	cout << "������ : " << sum << endl;
	
	//�� �� ������ ���� ���� ��ġ�ڳ� 
	
}

