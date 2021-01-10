#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n,c;
	cin >> n >> c;
	vector<pair<ll,ll> > v;
	for(int i = 0; i < n;++i){
		ll a,b,c;
		cin >> a >> b >> c;
		v.push_back({a,c});
		v.push_back({b+1,-c});
	}
	sort(v.begin(),v.end());
	ll sum = 0;
	ll ans = 0;
	for(int i = 0;i < (int)v.size();++i){
		int j = i+1;
		sum += v[i].second;
		while(j < (int)v.size() && v[j].second > 0 && v[j].first == v[j-1].first){
			sum += v[j].second;
			++j;
		}
		ans = ans + min(sum,(ll)c) * 1LL * (v[j].first-v[i].first);
		i = j-1;
	}
	cout << ans << "\n";
}
