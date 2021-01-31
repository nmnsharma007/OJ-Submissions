#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = 1e9+7;

ll solve(ll x,ll y){
	ll res = 1;
	while(y){
		if(y%2LL)
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
	ll n,m;
	int k;
	cin >> n >> m >> k;
	if(n%2 != m%2 && k == -1){
		cout << "0\n";
		return 0;
	}
	ll power = (((n-1)%(MOD-1)) * ((m-1)%(MOD-1)))%(MOD-1);
	cout << solve(2,power) << "\n";
}
