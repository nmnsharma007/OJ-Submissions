#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = 1e9+7;
ll power(ll x,ll y)
{
	ll ans = 1;
	while(y > 0){
		if(y%2LL)
			ans = (ans * x)%MOD;
		x = (x * x)%MOD;
		y /= 2LL;
	}
	return ans%MOD;
}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	ll n;
	cin >> n;
	vector<ll> dp(n+1);
	dp[1] = 1;
	for(ll i = 2; i <= n;++i){
		dp[i] = (dp[i-1] * 1LL * i)%MOD;
	}
	ll minu = power(2LL,n-1LL);
	ll ans = (dp[n] - minu + MOD)%MOD;
	cout << ans << "\n";
}
