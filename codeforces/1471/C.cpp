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
		int n,m;
		cin >> n >> m;
		int ranges[n];
		for(int i = 0; i < n;++i){
			cin >> ranges[i];
		}
		ll cost[m+1];
		for(int i = 1; i <= m;++i){
			cin >> cost[i];
		}
		int pt = 1;
		ll ans = 0;
		sort(ranges,ranges+n,greater<ll> ());
		for(int i = 0; i < n;++i){
			int len = ranges[i];
			if(len >= pt){
				ans += cost[pt];
				++pt;
			}
			else{
				ans += cost[len];
			}
		}
		cout << ans << "\n";
	}
}
