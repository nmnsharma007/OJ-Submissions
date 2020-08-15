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
	ll mid = (n+1)/2;
	ll pos = -1;
	for(ll i = mid+1; i <= n;++i){
		ll dif = (i - mid) * (arr[i] - arr[mid]);
		if(dif > k){
			pos = i-1;
			break;
		}
		arr[mid] = arr[i];
		k -= dif;
	}
	ll ans;
	if(pos != -1)
		ans = arr[mid] + k/(pos-mid+1LL);
	else 
		ans = arr[mid] + k/(n-mid+1LL);
	cout << ans << "\n";
}
