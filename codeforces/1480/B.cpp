#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--){
		ll a,b,n;
		cin >> a >> b >> n;
		vector<pair<ll,ll>> v;
		for(int i = 0; i < n;++i){
			ll x;
			cin >> x;
			v.push_back({x,0});
		}
		for(int i = 0; i < n;++i){
			ll x;
			cin >> x;
			v[i] = {v[i].first,x};
		}
		sort(v.begin(),v.end());
		bool flag = true;
		for(int i = 0;i < n;++i){
			ll health = v[i].second;
			ll attack = v[i].first;
			ll num = (health+a-1)/a;
			b = b - num*attack;
			if(b < 1LL-attack){
				flag = false;
				break;
			}
		}
		if(flag)
			cout << "YES\n";
		else
			cout << "NO\n";
	}
}
