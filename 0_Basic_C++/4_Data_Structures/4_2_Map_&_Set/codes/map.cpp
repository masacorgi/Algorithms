#include <bits/stdc++.h>
using namespace std;

map<string, int> mp;
string a[] = {"Shohei", "Jake", "Aguero"};

int main(){
	for(int i=0; i<3; i++){
		
		mp.insert( {a[i], i+1} ); // map�� ���� {key, value} 
		mp[a[i]] = i+1; // value �� ���� 
		
	}
	
	cout << mp["Chapman"] << endl;
	
	mp["Chapman"] = 4;
	
	cout << mp.size() << endl; // map�� ��� �� size 
	
	mp.erase("Chapman"); // �ش� Ű�� �ش��ϴ� ��� ���� 
	
	auto it = mp.find("Chapman"); // �ش� Ű�� �ش��ϴ� ����� ���ͷ����� ��ȯ, ���� �� end() ���ͷ����� ��ȯ 
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
	
	mp.clear(); // ��� ��� ���� 
	
	return 0;
	
}

