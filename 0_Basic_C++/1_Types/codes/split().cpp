#include <bits/stdc++.h>
using namespace std;


vector<string> split(const string& input, string delimiter){
	vector<string> result;
	
	auto start = 0; // 시작위치 
	auto end = input.find(delimiter); // 첫번째 구분자 위치 
	
	while(end != string::npos){
		result.push_back(input.substr(start, end - start));
		//result에 substring으로 시작위치부터 end위치(구분자 전)까지 잘라서 넣음 
		start = end + delimiter.size();
		// start위치 갱신(end위치 + 구분자크기(1)) 
		end = input.find(delimiter, start);
		// end 위치 갱신(start 위치 이후 구분자 위치) 
	}
	
	result.push_back(input.substr(start));
	
	return result;
}

int main(){
	string str = "apple,banana,orange,grape";
	vector<string> fruits = split(str,",");
	
	for( const string& fruit : fruits){
		cout << fruit << endl;
	}
	
	return 0;
}

