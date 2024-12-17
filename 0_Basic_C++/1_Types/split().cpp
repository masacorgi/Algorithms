#include <bits/stdc++.h>
using namespace std;


vector<string> split(const string& input, string delimiter){
	vector<string> result;
	
	auto start = 0; // ������ġ 
	auto end = input.find(delimiter); // ù��° ������ ��ġ 
	
	while(end != string::npos){
		result.push_back(input.substr(start, end - start));
		//result�� substring���� ������ġ���� end��ġ(������ ��)���� �߶� ���� 
		start = end + delimiter.size();
		// start��ġ ����(end��ġ + ������ũ��(1)) 
		end = input.find(delimiter, start);
		// end ��ġ ����(start ��ġ ���� ������ ��ġ) 
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

