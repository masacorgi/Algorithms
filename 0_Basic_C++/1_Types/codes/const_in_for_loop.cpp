#include <bits/stdc++.h>
using namespace std;

int main(){
	vector<int> vec = {10,20,30,40,50};
	
	for(const int& value : vec){
		cout << value << " ";
		
		//value = 100; // const로 가져오기에 바꿀 수 없다. 에러 발생 
	}
	
	return 0; 
}

