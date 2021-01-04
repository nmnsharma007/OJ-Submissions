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
		for(int i = 1; i <= n;++i){
			cin >> arr[i];
		}
		ll ans = 0;
		vector<ll> res(n+1);
		for(int i = n; i >= 1;--i){
			ll jump = arr[i];
			if(jump+i > n){
				res[i] = arr[i];
			}
			else{
				res[i] = res[jump+i] + arr[i];
			}
			ans = max(ans,res[i]);
		}
		cout << ans << "\n";
	}
}
