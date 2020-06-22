#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9+7;
int main()
{
	int h,w;
	cin >> h >> w;
	string grid[h];
	for(int i=0;i<h;i++)
		cin >> grid[i];
	int dp[h][w];
	for(int i=0;i<h;i++){
		for(int j=0;j<w;j++){
			if(i == 0 && j == 0){
				dp[i][j] = 1;
				continue;
			}
			if(grid[i][j] == '#'){
				dp[i][j] = 0;
				continue;
			}
			if(j == 0)
				dp[i][j] = dp[i-1][j]%mod;
			else if(i == 0)
				dp[i][j] = dp[i][j-1]%mod;
			else
				dp[i][j] = (dp[i-1][j] + dp[i][j-1])%mod;
		}
	}
	cout << dp[h-1][w-1] << "\n";
}