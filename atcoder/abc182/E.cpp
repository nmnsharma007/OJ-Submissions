#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int h,w,n,m;
	cin >> h >> w >> n >> m;
	int grid[h][w];
	memset(grid,0,sizeof(grid));
	vector<pair<int,int> > bulbs;
	for(int i = 0; i < n;++i){
		int row,col;
		cin >> row >> col;
		--row,--col;
		bulbs.push_back({row,col});
		grid[row][col] = 2;
	}
	for(int i = 0; i < m;++i){
		int row,col;
		cin >> row >> col;
		--row,--col;
		grid[row][col] = -1;
	}
	for(int i = 0; i < n;++i){
		int row = bulbs[i].first;
		int col = bulbs[i].second;
		for(int r = row-1;r >= 0;--r){
			if(grid[r][col] == -1)
				break;
			if(grid[r][col] == 2)
				break;
			grid[r][col] = 1;
		}
		for(int r = row+1;r < h;++r){
			if(grid[r][col] == -1)
				break;
			if(grid[r][col] == 2)
				break;
			grid[r][col] = 1;
		}
		for(int c = col-1;c >= 0;--c){
			if(grid[row][c] == -1)
				break;
			if(grid[row][c] == 2)
				break;
			grid[row][c] = 1;
		}for(int c = col+1;c < w;++c){
			if(grid[row][c] == -1)
				break;
			if(grid[row][c] == 2)
				break;
			grid[row][c] = 1;
		}
	}
	int ans = 0;
	for(int row = 0; row < h;++row){
		for(int col = 0; col < w;++col){
			if(grid[row][col] == 1 || grid[row][col] == 2)
				++ans;
		}
	}
	cout << ans << "\n";
}
