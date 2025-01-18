#include <bits/stdc++.h>
using namespace std;

struct Ralo{
	int a,b;
	double c,d,e;
};

void print_ralo_structure(Ralo ralo){
	cout << ralo.a << ' ' << ralo.b << ' ' << ralo.c << ' ' << ralo.c << ' ' << ralo.e << endl;
}
int main(){
	Ralo ralo = {1,1,1,1,1};
	
	print_ralo_structure(ralo);
	
	vector<Ralo> ret;
	ret.push_back(ralo);
	ret.push_back({1,2,3,4,5});
	ret.push_back({});
	ret.push_back({1,3});
	
	for(Ralo ralo : ret){
		print_ralo_structure(ralo);
	}
	
	return 0;
}

