#include <bits/stdc++.h>
using namespace std;
//NxM 배열의 미로, 1은 통로, 0은 벽
// 1,1 에서 출발해서 N,M 위치까지 지나야하는 최소 칸의  수(시작,끝 위치 포함)
//첫째 줄에 두 정수 N, M(2 ≤ N, M ≤ 100)이 주어진다. 다음 N개의 줄에는 M개의 정수로 미로가 주어진다. 각각의 수들은 붙어서 입력으로 주어진다.

const int max_n = 104;
int dy[4] = {-1,0,1,0};
int dx[4] = {0,1,0,-1};
int n, m, a[max_n][max_n], visited[max_n][max_n], y, x;

int main(){
	//입력 
	scanf("%d %d",&n, &m);
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			scanf("%1d", &a[i][j]);
		}
	}	 
	
	
	queue<pair<int,int>> q; //탐색 대기열 큐 
	visited[0][0] = 1; // 해당위치 탐색했는지, 몇번만에 방문한건지 저장 
	q.push({0,0}); // 0,0 부터 탐색해라 
	
	while(q.size()){ // 탐색 대기열 사이즈 0이면 종료(탐색끝) 
		tie(y,x) = q.front(); //탐색좌표 y,x에 입력(현위치) 
		q.pop(); // 대기열에서 삭제 
		 
		for(int i=0; i<4; i++){
			int ny = y+dy[i]; // 현위치 기준 상하좌우 탐색 
			int nx = x+dx[i];
			
			if(ny<0 || ny>=n || nx<0 || nx>=m || a[ny][nx]==0) continue;
			// 범위 밖이거나, 값이 0(벽)이면 건너뛰기 
			if(visited[ny][nx]) continue;
			// 이미 방문했으면 건너뛰기 
			
			visited[ny][nx] = visited[y][x] + 1;
			// 길이 있으면 현위치값+1로 몇번째로 도착하는지 기록 
			q.push({ny,nx}); 
			// 탐색 대기열에 추가 
		}
	}
	
	printf("%d", visited[n-1][m-1]);
	return 0;
	
	
}

