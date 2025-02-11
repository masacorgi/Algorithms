// 각 트럭이 주차된 시작시간, 끝난 시간이 주어진다.
// 트럭이 한대 주차되있을 경우 시간당 A원, 두대는 B원, 세대는 C원의 주차비가 발생한다.
// 주차요금을 구하라 (입력으로 주어지는 시간은 1<t<100 이다.) 

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
	cout << "주차비 : " << sum << endl;
	
	//아 왜 쓰레기 값이 들어갈까 미치겠네 
	
}

