#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	vector<ll> v,pref;
	for(int i = 0; i < n;++i){
		ll x;
		cin >> x;
		v.push_back(x);
		if(i > 0)
			pref.push_back(pref[i-1]+x);
		else
			pref.push_back(x);
	}
	map<ll,int> mp;
	mp[0] = 1;
	int ans = 0;
	for(int i = 0; i < n;++i){
		if(mp.count(pref[i])){
			++ans;
			mp.clear();
			++mp[pref[i-1]];
			++mp[pref[i]];
		}
		else
			++mp[pref[i]];
	}
	cout << ans << "\n";
}
