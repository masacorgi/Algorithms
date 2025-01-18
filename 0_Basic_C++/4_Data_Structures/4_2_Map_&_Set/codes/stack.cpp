#include <bits/stdc++.h>
using namespace std;

stack<string> stk;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	stk.push("엄");
	stk.push("상");
	stk.push("백");
	stk.push("화");
	stk.push("이");
	stk.push("팅");
	
	while(stk.size()){
		cout << stk.top() << endl;
		stk.pop();
	} 
}

