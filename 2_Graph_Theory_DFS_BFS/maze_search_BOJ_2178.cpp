#include <bits/stdc++.h>
using namespace std;
//NxM �迭�� �̷�, 1�� ���, 0�� ��
// 1,1 ���� ����ؼ� N,M ��ġ���� �������ϴ� �ּ� ĭ��  ��(����,�� ��ġ ����)
//ù° �ٿ� �� ���� N, M(2 �� N, M �� 100)�� �־�����. ���� N���� �ٿ��� M���� ������ �̷ΰ� �־�����. ������ ������ �پ �Է����� �־�����.

const int max_n = 104;
int dy[4] = {-1,0,1,0};
int dx[4] = {0,1,0,-1};
int n, m, a[max_n][max_n], visited[max_n][max_n], y, x;

int main(){
	//�Է� 
	scanf("%d %d",&n, &m);
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			scanf("%1d", &a[i][j]);
		}
	}	 
	
	
	queue<pair<int,int>> q; //Ž�� ��⿭ ť 
	visited[0][0] = 1; // �ش���ġ Ž���ߴ���, ������� �湮�Ѱ��� ���� 
	q.push({0,0}); // 0,0 ���� Ž���ض� 
	
	while(q.size()){ // Ž�� ��⿭ ������ 0�̸� ����(Ž����) 
		tie(y,x) = q.front(); //Ž����ǥ y,x�� �Է�(����ġ) 
		q.pop(); // ��⿭���� ���� 
		 
		for(int i=0; i<4; i++){
			int ny = y+dy[i]; // ����ġ ���� �����¿� Ž�� 
			int nx = x+dx[i];
			
			if(ny<0 || ny>=n || nx<0 || nx>=m || a[ny][nx]==0) continue;
			// ���� ���̰ų�, ���� 0(��)�̸� �ǳʶٱ� 
			if(visited[ny][nx]) continue;
			// �̹� �湮������ �ǳʶٱ� 
			
			visited[ny][nx] = visited[y][x] + 1;
			// ���� ������ ����ġ��+1�� ���°�� �����ϴ��� ��� 
			q.push({ny,nx}); 
			// Ž�� ��⿭�� �߰� 
		}
	}
	
	printf("%d", visited[n-1][m-1]);
	return 0;
	
	
}

