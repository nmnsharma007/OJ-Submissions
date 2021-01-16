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
		pair<ll,ll> arr[n];
		for(int i = 0; i < n;++i){
			cin >> arr[i].first;
		}
		for(int i = 0; i < n;++i){
			cin >> arr[i].second;
		}
		sort(arr,arr+n);
		ll suf[n];
		suf[n-1] = arr[n-1].second;
		for(int i = n-2; i >= 0;--i){
			suf[i] = suf[i+1] + arr[i].second;
		}
		ll ans = suf[0];
		for(int i = 0; i < n;++i){
			if(i == n-1)
				ans = min(ans,arr[i].first);
			else
				ans = min(ans,max(arr[i].first,suf[i+1]));
		}
		cout << ans << "\n";
	}
}
