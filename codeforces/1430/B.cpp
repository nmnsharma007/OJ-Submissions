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
		int n,k;
		cin >> n >> k;
		ll arr[n];
		for(int i = 0; i < n;++i){
			cin >> arr[i];
		}
		sort(arr,arr+n);
		ll ans = arr[n-1];
		for(int i = n-2; i >= n-k-1;--i){
			ans += arr[i];
		}
		cout << ans << "\n";
	}
}
