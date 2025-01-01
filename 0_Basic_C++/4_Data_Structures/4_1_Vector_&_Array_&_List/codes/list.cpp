#include <bits/stdc++.h>
using namespace std;

list<int> a;

void print(list<int> li){
	for(auto it : li) cout << it << ' ';
	cout << endl;
}

int main(){
	for(int i=1; i<=3; i++) a.push_back(i); // 뒤에서부터 value를 넣음 
	for(int i=1; i<=3; i++) a.push_front(i);  // 앞에서부터 value를 넣음
	
	auto it = a.begin();
	it++;
	a.insert(it, 1000); //요소를 몇번째에 삽입 
	print(a);
	
	a.erase(it); // 몇번째 요소를 삭제 
	print(a); 
	
	
	cout << "a.front() : " << a.front();// 맨 앞 요소 참조
	cout << endl;
	 
	a.pop_front(); // 맨 앞 요소 삭제 
	print(a);
	
	cout << "a.back() : " << a.back(); // 맨 뒤 요소 참조 
	cout << endl;
	
	a.pop_back(); // 맨 뒤 요소 삭제 
	print(a);
	
	a.clear(); // 요소 전체 삭제 
	print(a);
	return 0;
}

