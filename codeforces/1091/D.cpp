#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = 998244353;

ll solve(ll x)
{
	ll res = 1;
	int y = MOD-2;
	while(y > 0){
		if(y%2 == 1)
			res = (res*x)%MOD;
		x = (x*x)%MOD;
		y /= 2;
	}
	return res;
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	vector<ll> f(n+1),inv(n+1);
	f[0] = 1;
	ll ans = 0;
	for(int i = 1; i <= n;++i){
		f[i] = (f[i-1] * 1LL * i)%MOD;
		if(i <= n-1)
			inv[i] = solve(f[i]);
	}
	ans = (n * 1LL * f[n])%MOD;
	for(int i = 1; i <= n-1;++i){
		ans = (ans - (f[n]*inv[i])%MOD + MOD)%MOD;
	}
	cout << ans << "\n";
}
