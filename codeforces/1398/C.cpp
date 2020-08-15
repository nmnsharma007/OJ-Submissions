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
		int n;
		cin >> n;
		string s;
		cin >> s;
		vector<int> pref(n+1);
		pref[0] = 0;
		map<int,ll> mp;
		for(int i = 1; i <= n;++i){
			pref[i] = pref[i-1] + (s[i-1]-'0');
		}
		for(int i = 0; i <= n;++i){
			++mp[pref[i]-i-1];
		}
		ll ans = 0;
		map<int,ll> :: iterator it;
		for(it = mp.begin();it != mp.end();++it){
			ll x = it->second;
			ans += (x*(x-1))/2;
		}
		cout << ans << "\n";
	}
}
