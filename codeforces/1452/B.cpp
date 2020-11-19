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
		ll sum = 0,maxi = 0;
		for(int i = 0; i < n;++i){
			ll x;
			cin >> x;
			sum += x;
			maxi = max(maxi,x);
		}
		ll ans = maxi * (n-1LL) - sum;
		if(ans < 0){
			ans = ((sum+n-2)/(n-1)) * (n-1) - sum;
		}
		cout << ans << "\n";
	}
}
