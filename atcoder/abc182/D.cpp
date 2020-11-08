#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	ll arr[n+1];
	arr[0] = 0;
	ll ans = 0;
	for(int i = 1; i <= n;++i){
		cin >> arr[i];
		arr[i] += arr[i-1];
	}
	vector<ll> pref(n+1,0);
	for(int i = 1; i <= n;++i){
		pref[i] = pref[i-1] + arr[i];
	}
	ll maxi = 0;
	for(int i = 1; i <= n;++i){
		maxi = max(maxi,arr[i]);
		ans = max(ans,maxi+pref[i-1]);
	}
	cout << ans << "\n";
}
