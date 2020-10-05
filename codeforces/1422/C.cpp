#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = 1e9+7;
ll power(ll x,int y){
	if(y == 0)
		return 1;
	ll res = 1;
	while(y){
		if(y&1)
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
	string s;
	cin >> s;
	int n = s.length();
	vector<ll> suf(n);
	suf[n-1] = 0;
	for(int i = n-2; i >= 0;--i){
		ll num = n-i-1;
		ll to_add = num * power(10LL,num-1);
		suf[i] = suf[i+1] + to_add%MOD;
	}
	ll ans = 0;
	for(int i = 0; i < n;++i){
		ll digit = s[i] - '0';
		ll num_left = i;
		ll num_right = n-i-1;
		ll left_contribution =	(num_left*(num_left+1))/2LL;
		left_contribution %= MOD;
		left_contribution = ((left_contribution * digit)%MOD) * power(10LL,n-i-1);
		left_contribution %= MOD;
		ll right_contribution = (suf[i] * digit)%MOD;
		right_contribution %= MOD;
		ans = (ans + right_contribution + left_contribution)%MOD;
	}
	cout << ans << "\n";
}
