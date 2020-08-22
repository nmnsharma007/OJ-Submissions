#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int h,w;
	cin >> h >> w;
	int srow,scol,erow,ecol;
	cin >> srow >> scol;
	cin >> erow >> ecol;
	--srow,--scol,--erow,--ecol;
	string grid[h];
	for(int i = 0; i < h;++i){
		cin >> grid[i];
	}
	bool ok = false;
	deque<pair<int,int> > dq;
	int dist[h][w];
	for(int i = 0; i < h;++i){
		for(int j = 0; j < w;++j){
			dist[i][j] = 1e7;
		}
	}
	dist[srow][scol] = 0;
	dq.push_back({srow,scol});
	while(!dq.empty()){
		pair<int,int> cur_node = dq.front();
		dq.pop_front();
		int row = cur_node.first;
		int col = cur_node.second;
		if(row == erow && col == ecol){
			ok = true;
			break;
		}
		for(int dx = -2;dx <= 2;++dx){
			for(int dy = -2;dy <= 2;++dy){
				int nrow = row + dx;
				int ncol = col + dy;
				if(nrow == row && ncol == col)
					continue;
				if(nrow < 0 || ncol < 0 || nrow >= h || ncol >= w)
					continue;
				int w = 1;
				if(grid[nrow][ncol] == '#')
					continue;
				if((abs(nrow-row) == 1 && abs(ncol-col) == 0) || (abs(ncol-col) == 1 && abs(nrow-row) == 0))
					w = 0;
				if(dist[nrow][ncol] > dist[row][col] + w){
					dist[nrow][ncol] = dist[row][col] + w;
					if(w == 0)
						dq.push_front({nrow,ncol});
					else
						dq.push_back({nrow,ncol});
				}
			}
		}
	}
	if(!ok)
		dist[erow][ecol] = -1;
	cout << dist[erow][ecol] << "\n";
}
