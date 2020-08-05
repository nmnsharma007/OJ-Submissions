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
		ll a[n],b[n];
		ll mina = 1e10,minb = 1e10;
		for(int i = 0; i < n;++i){
			cin >> a[i];
			mina = min(mina,a[i]);
		}
		for(int i = 0; i < n;++i){
			cin >> b[i];
			minb = min(minb,b[i]);
		}
		ll ans = 0;
		for(int i = 0; i < n;++i){
			ll difa = a[i] - mina;
			ll difb = b[i] - minb;
			if(difa < difb)
				swap(difa,difb);
			ans += difa;
		}
		cout << ans << "\n";
	}
}