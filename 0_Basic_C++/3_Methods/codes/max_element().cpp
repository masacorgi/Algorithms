#include <bits/stdc++.h>
using namespace std;

int main(){
	vector<int> v = {1,2,3,4,5,6,7,8,9,10};
	
	int max = *max_element(v.begin(), v.end());
	auto max_it = max_element(v.begin(),v.end());
	
	cout << max << endl;
	cout << (int)(max_it - v.begin()) << endl; // 몇번째 인덱스인지 
}

