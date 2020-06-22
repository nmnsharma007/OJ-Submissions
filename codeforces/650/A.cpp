#include<bits/stdc++.h>
using namespace std;
using ll = long long;
ll solve(ll c)
{
	return (c*(c-1))/2LL;
}
int main()
{
	int n;
	cin >> n;
	map<ll,ll> xc;
	map<ll,ll> yc;
	map<pair<ll,ll>,ll> xyc;
	for(int i=0;i<n;i++){
		ll x,y;
		cin >> x >> y;
		xc[x]++;
		yc[y]++;
		xyc[{x,y}]++;
	}
	ll ans = 0;
	for(auto temp:xc)
		ans += solve(temp.second);
	for(auto temp:yc)
		ans += solve(temp.second);
	for(auto temp:xyc)
		ans -= solve(temp.second);
	cout << ans << "\n";
}