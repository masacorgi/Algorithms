#include <bits/stdc++.h>
using namespace std;

int main(){
	string a = "love is";
	a += " pain!";
	
	a.pop_back();
	
	cout << a << " : " << a.size() << endl;
	cout << char(* a.begin()) << endl;
	cout << char(* (a.end() -1 )) << endl;
	
	//string& insert (size_t pos, const string& str);
	a.insert(0, "test ");
	cout << a << " : " << a.size() << endl;
	
	//string& erase (size_t pos = 0, size_t len = npos);
	a.erase(0, 5);
	cout << a << " : " << a.size() << endl;
	
	//size_t find (const string& str, size_t pos = 0);
	auto it = a.find("love");
	if( it != string::npos){
		cout << "포함되어 있다." << endl;
	}
	
	cout << it << endl;
	cout << string::npos << endl;
	
	//string substr (size_t pos = 0, size_t len = npos) const;
	cout << a.substr(5,2) << endl;
	
	return 0;
	
}

