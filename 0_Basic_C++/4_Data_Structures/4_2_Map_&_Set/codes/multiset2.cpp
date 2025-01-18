#include <bits/stdc++.h>
using namespace std;

int main(){

	multiset<int> numbers = {1,2,3,3,4,5,5,5,6};
	
	//특정 값의 개수를 셈
	int count_five = numbers.count(5);
	cout << "요소 5의 갯수: " << count_five << endl;
	
	return 0; 
}

