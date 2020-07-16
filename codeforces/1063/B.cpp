#include<bits/stdc++.h>
using namespace std;
const int N = 2001;
int dist[2001][2001];
int dx[] = {0,0,1,-1};
int dy[] = {1,-1,0,0};
char grid[N][N];
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n,m,r,c,x,y;
	cin >> n >> m >> r >> c >> x >> y;
	//string grid[n+1];
	int dist[n+1][m+1];
	for(int i = 1;i <= n;i++){
		cin >> (grid[i]+1);
		for(int j = 1; j <= m;j++){
			dist[i][j] = INT_MAX;
		}
	}
	deque<pair<int,int> > dq;
	dq.push_back({r,c});
	dist[r][c] = 0;
	while(!dq.empty()){
		pair<int,int> cur = dq.front();
		dq.pop_front();
		for(int dr = 0; dr < 4;dr++){
			int row = cur.first + dx[dr];
			int col = cur.second + dy[dr];
			if(row >= 1 && col >= 1 && row <= n && col <= m){
				if(grid[row][col] != '*'){
					if(col >= cur.second){
						if(dist[row][col] > dist[cur.first][cur.second]){
							dist[row][col] = dist[cur.first][cur.second];
							dq.push_front({row,col});
						}
					}
					else{
						if(dist[row][col] > dist[cur.first][cur.second] + 1){
							dist[row][col] = dist[cur.first][cur.second] + 1;
							dq.push_back({row,col});
						}
					}
				}
			}
		}
	}
	int ans = 0;
	for(int i = 1; i <= n;i++){
		for(int j = 1; j <= m;j++){
				int left = dist[i][j];
				int right = left + j - c;
				if(left <= x && right <= y)
					ans++;
		}
	}
	cout << ans << "\n";
}