#include<bits/stdc++.h>
using namespace std;
using ll = long long;
map<ll,ll> mp;

ll solve(ll x,ll y){
	if(mp.count(y))
		return mp[y];
	if(x >= y)
		return x-y;
	else{
		ll ans = y-x;
		if(y%2LL)
			ans = min(ans,min(2 + solve(x,(y+1)/2LL),2 + solve(x,(y-1)/2LL)));
		else
			ans = min(ans,1 + solve(x,y/2LL));
		return mp[y] = ans;
	}
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	ll x,y;
	cin >> x >> y;
	ll ans = solve(x,y);
	cout << ans << "\n"; 
}
