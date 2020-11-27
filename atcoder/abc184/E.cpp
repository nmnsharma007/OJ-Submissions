#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int dx[] = {0,0,-1,1};
int dy[] = {1,-1,0,0};
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int h,w;
	cin >> h >> w;
	string grid[h];
	int srow,scol,erow,ecol;
	int dist[h][w];
	vector<pair<int,int> > adj[26];
	vector<bool> freq(26,false);
	for(int i = 0; i < h;++i){
		cin >> grid[i];
		for(int j = 0; j < w;++j){
			if(grid[i][j] == 'S')
				srow = i,scol = j;
			else if(grid[i][j] == 'G')
				erow = i,ecol = j;
			if(grid[i][j] <= 'z' && grid[i][j] >= 'a')
				adj[grid[i][j]-'a'].push_back({i,j});
			dist[i][j] = 1e9+7;
		}
	}
	queue<pair<int,pair<int,int>>> q;
	q.push({0,{srow,scol}});
	dist[srow][scol] = 0;
	while(!q.empty()){
		int cur_row = q.front().second.first;
		int cur_col = q.front().second.second;
		int cur_dist = q.front().first;
		q.pop();
		if(cur_dist > dist[cur_row][cur_col])
			continue;
		for(int i = 0; i < 4;++i){
			int next_row = cur_row + dx[i];
			int next_col = cur_col + dy[i];
			if(next_row >= h || next_row < 0 || next_col >= w || next_col < 0)
				continue;
			if(grid[next_row][next_col] == '#')
				continue;
			if(dist[next_row][next_col] > dist[cur_row][cur_col] + 1){
				dist[next_row][next_col] = dist[cur_row][cur_col] + 1;
				q.push({dist[next_row][next_col],{next_row,next_col}});
			}
		}
		if(grid[cur_row][cur_col] >= 'a' && grid[cur_row][cur_col] <= 'z'){
			int node = grid[cur_row][cur_col] - 'a';
			if(freq[node])
				continue;
			freq[node] = true;
			for(int i = 0; i < (int)adj[node].size();++i){
				int next_row = adj[node][i].first;
				int next_col = adj[node][i].second;
				if(dist[next_row][next_col] > dist[cur_row][cur_col] + 1){
					dist[next_row][next_col] = dist[cur_row][cur_col] + 1;
					q.push({dist[next_row][next_col],{next_row,next_col}});
				}
			}
		}
	}
	if(dist[erow][ecol] == 1e9+7)
		dist[erow][ecol] = -1;
	cout << dist[erow][ecol] << "\n";
}
