#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	ll n,r,avg;
	cin >> n >> r >> avg;
	vector<pair<ll,ll> > v;
	ll sum = 0;
	for(int i = 0; i < n;++i){
		ll x,y;
		cin >> x >> y;
		sum += x;
		v.push_back({y,x});
	}
	sort(v.begin(),v.end());
	ll ans = 0;
	ll want = n * avg;
	for(int i = 0; i < n;++i){
		ll grade = v[i].second;
		ll essays = v[i].first;
		ll get = r-grade;
		if(sum+get >= want){
			ll need = max(0LL,want-sum);
			ll read = need * essays;
			ans += read;
			break;
		}
		else{
			ll read = get * essays;
			ans += read;
			sum += get;
		}
	}
	cout << ans << "\n";
}
