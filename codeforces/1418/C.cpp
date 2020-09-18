#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 2e5+5;
int dp[N][2];
vector<int> boss(N,0);
int solve(int n,int i,int turn)
{
	if(dp[i][turn] != -1)
		return dp[i][turn];
	if(i == n){
		if(turn == 1)
			return boss[i];
		else
			return 0;
	}
	if(i == n-1){
		if(turn == 0)
			return 0;
		else
			boss[i];
	}
	if(turn == 1)
		return dp[i][1] = boss[i] + min(boss[i+1] + solve(n,i+2,0),solve(n,i+1,0)); 
	if(turn == 0)
		return dp[i][0] = min(solve(n,i+1,1),solve(n,i+2,1));
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		for(int i = 1; i <= n;++i){
			cin >> boss[i];
			dp[i][0] = dp[i][1] = -1;
		}
		int ans = solve(n,1,1);
		cout << ans << "\n";
	}
}
