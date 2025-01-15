#include <bits/stdc++.h>
using namespace std;

map<string, int> mp;
string a[] = {"Shohei", "Jake", "Aguero"};

int main(){
	for(int i=0; i<3; i++){
		
		mp.insert( {a[i], i+1} ); // map에 삽입 {key, value} 
		mp[a[i]] = i+1; // value 값 변경 
		
	}
	
	cout << mp["Chapman"] << endl;
	
	mp["Chapman"] = 4;
	
	cout << mp.size() << endl; // map의 요소 수 size 
	
	mp.erase("Chapman"); // 해당 키에 해당하는 요소 삭제 
	
	auto it = mp.find("Chapman"); // 해당 키에 해당하는 요소의 이터레이터 반환, 없을 시 end() 이터레이터 반환 
	if(it == mp.end()){
		cout << "There's no value with that key" << endl;
	}
	
	mp["Chapmen"] = 100;
	if(it != mp.end()){
		cout << (*it).first << " : " << (*it).second << endl;
	}
	
	for(auto it : mp){
		cout << (it).first << " : " << (it).second << endl;
	}
	for(auto it= mp.begin(); it != mp.end(); it++){
		cout << (*it).first << " : " << (*it).second << endl;
	}
	
	mp.clear(); // 모든 요소 삭제 
	
	return 0;
	
}

