#include <bits/stdc++.h>
using namespace std;

int main(){
	string a = "love is";
	cout << "a: " << a << endl;
	
	a.push_back(' ');
	a += "pain!";
	cout << "a: " << a << endl;
	
	a.pop_back();
	cout << "a: " << a << endl;
	
	cout << "a: " << a << ", a.size() : " << a.size() << endl;
	cout << "char(* a.begin()) : " << char(* a.begin()) << endl;
	cout << "char(* a.end() -1 ) : " << char(* (a.end() -1 )) << endl;
	
	//string& insert (size_t pos, const string& str);
	a.insert(0, "inserted txt ");
	cout << "a: " << a << ", a.size() : " << a.size() << endl;
	
	//string& erase (size_t pos = 0, size_t len = npos);
	a.erase(0, 13);
	cout << "a: " << a << ", a.size() : " << a.size() << endl;
	
	//size_t find (const string& str, size_t pos = 0);
	auto it = a.find("love");
	cout << "love 는 ";
	if( it != string::npos){
		cout << "포함되어 있다." << endl;
	}else{
		cout << "포함되어 있지 않음." << endl; 
	}
	
	cout << "it : " << it << endl;
	cout << "string::npos : " << string::npos << endl;
	
	//string substr (size_t pos = 0, size_t len = npos) const;
	cout << "a.substr(5,5) : " << a.substr(5,5) << endl;
	
	return 0;
	
}

