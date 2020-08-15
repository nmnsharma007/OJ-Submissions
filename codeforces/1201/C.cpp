#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	ll n,k;
	cin >> n >> k;
	ll arr[n+1];
	for(int i = 1; i <= n;++i){
		cin >> arr[i];
	}
	sort(arr+1,arr+n+1);
	ll l = 0;
	ll r = 1e14;
	ll ans = 0;
	while(l < r){
		ll mid = (l+r+1LL)/2LL;
		ll cnt = 0LL;
		for(int i = (n+1)/2;i <= n;++i){
			cnt += max(0LL,mid-arr[i]);
		}
		if(cnt > k)
			r = mid-1LL;
		else{
			ans = mid;
			l = mid;
		}
	}
	cout << ans << "\n";
}
