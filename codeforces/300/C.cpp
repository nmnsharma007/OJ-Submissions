#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const ll MOD = 1e9+7;

ll solve(ll x,ll y)
{
	if(y == 0)
		return 1;
	x %= MOD;
	ll res = 1;
	while(y){
		if(y%2)
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
	int a,b,n;
	cin >> a >> b >> n;
	ll fact[n+1];
	fact[0] = 1;	
	for(ll i = 1; i <= n;++i){
		fact[i] = (fact[i-1] * i)%MOD;
	}
	ll ans = 0;
	for(int i = 0; i <= n;++i){
		int sum = i*a+(n-i)*b;
		int flag = 1;
		while(sum){
			int rem = sum%10;
			if(rem != a && rem != b){
				flag = 0;
				break;
			}
			sum /= 10;
		}
		if(flag){
			if(i == 0 || i == n){
				++ans;
				continue;
			}
			ll add = (fact[n] * (solve(fact[i]*fact[n-i],MOD-2)%MOD))%MOD;
			ans = (ans + add)%MOD;
		}
	}
	cout << ans << "\n";
} 
