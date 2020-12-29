#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	ll n;
	cin >> n;
	vector<ll> ans;
	for(ll i = 1; i*i <= n;++i){
		if(n%i != 0)
			continue;
		ll d = i;
		ll x = n/i;
		ll res = x + ((x*(x-1LL))/2LL)*d;
		ans.push_back(res);
		if(d == x)
			continue;
		swap(d,x);
		res = x + ((x*(x-1LL))/2LL)*d;
		ans.push_back(res);
	}
	sort(ans.begin(),ans.end());
	for(auto x : ans)
		cout << x << " ";
	cout << "\n";
}
