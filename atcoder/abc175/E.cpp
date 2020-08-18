#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 3001;
ll grid[N][N];
ll memo[N][N][4];
ll solve(int r,int c,int items)
{
	if(r <= 0 || c <= 0)
		return -1e7;
	if(memo[r][c][items] != -1)
		return memo[r][c][items];
	if(r == 1 && c == 1){
		if(items >= 1 && grid[r][c])
			return grid[r][c];
		return 0;
	}
	if(items == 0)
		return memo[r][c][items] = max(solve(r-1,c,3),solve(r,c-1,items));
	if(grid[r][c] == 0)
		return memo[r][c][items] = max(solve(r,c-1,items),solve(r-1,c,3));
	if(grid[r][c])
		return memo[r][c][items] = max(grid[r][c] + max(solve(r,c-1,items-1),solve(r-1,c,3)),max(solve(r,c-1,items),solve(r-1,c,3)));
}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int R,C,K;
	cin >> R >> C >> K;
	memset(grid,0,sizeof(grid));
	memset(memo,-1,sizeof(memo));
	for(int i = 0;i < K;++i){
		int r,c;
		ll v;
		cin >> r >> c >> v;
		grid[r][c] = v;
	}
	ll ans = solve(R,C,3);
	cout << ans << "\n";
}
