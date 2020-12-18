#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
	ll n,m;
	cin >> n >> m;
	ll fact[n+1];
	fact[1] = 1;
	for(ll i = 2; i <= n;++i){
		fact[i] = (fact[i-1]*i)%m;//factorial
	}
	ll ans = 0;
	for(ll i = 1; i <= n;++i){
		ll temp = ((fact[n-i+1]*(n-i+1))%m * fact[i])%m;
		ans = (ans+temp)%m;
	}
	cout << ans << "\n";
}
