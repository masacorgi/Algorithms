#include <bits/stdc++.h>
using namespace std;

int main(){
	string s = "123456";
	
	vector<int> digits;
	
	for(int i=0; i<s.length(); i++){
		digits.push_back( (int)s[i] - '0' );
	}
	
	for(auto digit : digits){
		cout << digit << endl;
	}
	
	return 0;
}

