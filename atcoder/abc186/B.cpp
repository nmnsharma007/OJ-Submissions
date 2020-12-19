#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int h,w;
	cin >> h >> w;
	int mini = 101;
	int grid[h][w];
	for(int i = 0; i < h;++i){
		for(int j = 0; j < w;++j){
			cin >> grid[i][j];
			mini = min(mini,grid[i][j]);
		}
	}
	int ans = 0;
	for(int i = 0; i < h;++i){
		for(int j = 0; j < w;++j){
			ans += grid[i][j]-mini;
		}
	}
	cout << ans << "\n";
}
