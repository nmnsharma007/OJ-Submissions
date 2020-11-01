#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n,m,k;
	cin >> n >> m >> k;
	int grid[n][m];
	for(int i = 0; i < n;++i){
		for(int j = 0; j < m;++j){
			cin >> grid[i][j];
		}
	}
	int dp[n+1][m+1][m+1][k+1];
	memset(dp,-1,sizeof(dp));
	dp[0][0][0][0] = 0;
	for(int row = 0; row < n;++row){
		for(int col = 0; col < m;++col){
			for(int cnt = 0;cnt <= m/2;++cnt){
				for(int rem = 0;rem < k;++rem){
					if(dp[row][col][cnt][rem] == -1)
						continue;
					if(cnt < m/2 && col < m-1)
						dp[row][col+1][cnt+1][(rem+grid[row][col])%k] = max(dp[row][col+1][cnt+1][(rem+grid[row][col])%k],dp[row][col][cnt][rem]+grid[row][col]);
					if(cnt < m/2 && col == m-1)
						dp[row+1][0][0][(rem+grid[row][col])%k] = max(dp[row+1][0][0][(rem+grid[row][col])%k],dp[row][col][cnt][rem]+grid[row][col]);
					if(col < m-1)
						dp[row][col+1][cnt][rem] = max(dp[row][col][cnt][rem],dp[row][col+1][cnt][rem]);
					if(col == m-1)
						dp[row+1][0][0][rem] = max(dp[row+1][0][0][rem],dp[row][col][cnt][rem]);
				}
			}
		}
	}
	cout << max(0,dp[n][0][0][0]) << "\n";
}
