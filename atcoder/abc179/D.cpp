#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = 998244353;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n,k;
	cin >> n >> k;
	vector<pair<int,int>> segments;;
	for(int i = 0; i < k;++i){
		int l,r;
		cin >> l >> r;
		segments.push_back({l,r});
	}
	vector<ll> dp(n+1,0);
	dp[1] = 1;
	vector<ll> pref(n+1,0);
	pref[1] = 1;
	for(int i = 2; i <= n;++i){
		for(int j = 0; j < k;++j){
			int l = segments[j].first;
			int r = segments[j].second;
			dp[i] = (dp[i] +  (pref[max(0,i-l)] - pref[max(0,i-r-1)] + MOD)%MOD)%MOD;
		}
		pref[i] = (pref[i-1] + dp[i])%MOD;
	}
	cout << dp[n] << "\n";
}
