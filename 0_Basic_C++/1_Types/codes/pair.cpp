#include <bits/stdc++.h>
using namespace std;

pair<int, int> p1;
pair<int, int> p2;
tuple<int, int, int> t1;
tuple<int, int, int> t2;


int a, b, c;

int main(){
	p1 = {1, 2};
	p2 = make_pair(1, 2); // 같은 동작 
	
	a = p1.first;
	b = p1.second;
	cout << a << " : " << b << endl;
	
	tie(a,b) = p1; // fisrt, second 쓸 필요 없이 한방에 복사 
	cout << a << " : " << b << endl;
	
	t1 = make_tuple(1, 2, 3);
	t2 = make_tuple(3, 4, 5);
	 
	a = get<0>(t1);
	b = get<1>(t1);
	c = get<2>(t1);
	cout << a << " : " << b << " : " << c << endl;
	
	tie(a,b,c) = t2; // get<0>().. 할필요 없이 한방에 복사  
	cout << a << " : " << b << " : " << c << endl;
}

