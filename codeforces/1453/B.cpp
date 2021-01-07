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
		ll arr[n+1];
		arr[0] = 0;
		vector<ll> pref(n+1,0),suf(n+2,0);
		for(int i = 1; i <= n;++i){
			cin >> arr[i];
			if(i > 1)
				pref[i] = pref[i-1] + abs(arr[i]-arr[i-1]);
		}
		for(int i = n-1; i >= 1;--i){
			suf[i] = suf[i+1] + abs(arr[i]-arr[i+1]);
		}
		ll ans = 1e18;
		for(int i = 1; i <= n;++i){
			ll sum = 0;
			if(i > 1 && i < n){
				sum = pref[i-1] + abs(arr[i+1]-arr[i-1]) + suf[i+1];
				ans = min(ans,sum);
			}
			else if(i == 1){
				sum = suf[i+1];
				ans = min(ans,sum);
			}
			else if(i == n){
				sum = pref[i-1];
				ans = min(ans,sum);
			}
		}
		cout << ans << "\n";
	}
}
