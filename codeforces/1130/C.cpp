#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int dx[] = {1,-1,0,0};
int dy[] = {0,0,-1,1};

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	int srow,scol,erow,ecol;
	cin >> srow >> scol;
	cin >> erow >> ecol;
	--srow,--scol,--erow,--ecol;
	string grid[n];
	for(int i = 0; i < n;++i){
		cin >> grid[i];
	}
	queue<pair<int,int> > q;
	bool visited_s[n][n],visited_e[n][n];
	memset(visited_s,false,sizeof(visited_s));
	memset(visited_e,false,sizeof(visited_e));
	q.push({srow,scol});
	while(!q.empty()){
		int crow = q.front().first;
		int ccol = q.front().second;
		q.pop();
		if(visited_s[crow][ccol])
			continue;
		visited_s[crow][ccol] = true;
		for(int i = 0; i < 4;++i){
			int nrow = crow + dx[i];
			int ncol = ccol + dy[i];
			if(nrow >= n || ncol >= n || nrow < 0 || ncol < 0)
				continue;
			if(grid[nrow][ncol] == '1')
				continue;
			q.push({nrow,ncol});
		}
	}
	q.push({erow,ecol});
	while(!q.empty()){
		int crow = q.front().first;
		int ccol = q.front().second;
		q.pop();
		if(visited_e[crow][ccol])
			continue;
		visited_e[crow][ccol] = true;
		for(int i = 0; i < 4;++i){
			int nrow = crow + dx[i];
			int ncol = ccol + dy[i];
			if(nrow >= n || ncol >= n || nrow < 0 || ncol < 0)
				continue;
			if(grid[nrow][ncol] == '1')
				continue;
			q.push({nrow,ncol});
		}
	}
	int ans = INT_MAX;
	for(int r1 = 0; r1 < n;++r1){
		for(int c1 = 0;c1 < n;++c1){
			for(int r2 = 0;r2 < n;++r2){
				for(int c2 = 0; c2 < n;++c2){
					if(visited_s[r1][c1] && visited_e[r2][c2]){
						int term = abs(r1-r2)*abs(r1-r2) + abs(c1-c2) * abs(c1-c2);
						ans = min(ans,term);
					}
				}
			}
		}
	}
	cout << ans << "\n";
}
