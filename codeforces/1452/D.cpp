#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = 998244353;

ll power(ll x,ll y)
{
	if(y == 0)
		return 1;
	ll res = 1;
	while(y){
		if(y%2)
			res = (res*x)%MOD;
		x = (x*x)%MOD;
		y /= 2LL;
	}
	return res;
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	vector<ll> fib(n+1);
	fib[0] = 0,fib[1] = 1;
	for(int i = 2; i <= n;++i){
		fib[i] = (fib[i-1] + fib[i-2])%MOD;
	}
	ll num = power(2LL,(ll)n*(MOD-2));
	ll ans = (fib[n]*num)%MOD;
	cout << ans << "\n";
}
