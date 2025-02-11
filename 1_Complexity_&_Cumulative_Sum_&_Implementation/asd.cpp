#include <bits/stdc++.h>
using namespace std;

int dwarves[9];
int sum;

int main(){
	for(int i=0; i<9; i++){
		cin >> dwarves[i];
		sum += dwarves[i];
	}	
	sort(dwarves, dwarves+9);
	
	pair<int, int> no_dwarves_index;
	

		for(int i=0; i<9; i++){
			for(int j=0; j<i; j++){
				if(sum - dwarves[i] - dwarves[j] == 100){
					//no_dwarves_index.first = i;
					//no_dwarves_index.second = j;
					tie(i,j) = no_dwarves_index;
				}
			}
		}
	
	cout << "Á¤´ä" << endl;
	for(int i=0; i<9; i++){
		if(i==no_dwarves_index.first || i==no_dwarves_index.second){
			continue;
		}
		cout << dwarves[i] << endl;
	}
}

