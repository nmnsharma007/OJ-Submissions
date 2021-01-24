#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = 998244353;

int power(int x,int y){
	int res = 1;
	while(y){
		if(y%2)
			res = (res * 1LL * x)%MOD;
		x = (x * 1LL * x)%MOD;
		y /= 2;
	}
	return res;
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n,s;
	cin >> n >> s;
	int arr[n+1];
	for(int i = 1; i <= n;++i){
		cin >> arr[i];
	}
	int dp[n+1][s+1];
	int start = power(2,n);
	memset(dp,0,sizeof(dp));
	for(int i = 0; i <= n;++i){
		dp[i][0] = start;
	}
	int inv = power(2,MOD-2);
	for(int i = 1; i <= n;++i){
		for(int sum = 1;sum <= s;++sum){
			if(sum >= arr[i])
				dp[i][sum] = (dp[i-1][sum] + (dp[i-1][sum-arr[i]] * 1LL * inv)%MOD)%MOD;
			else
				dp[i][sum] = dp[i-1][sum];
		}
	}
	cout << dp[n][s] << "\n";
}
