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
		ll m,d,w;
		cin >> m >> d >> w;
		ll L = min(m,d);
		ll w1 = w/__gcd(w,d-1);
		ll t = L/w1;
		ll ans = L*t - (w1*(t*(t+1)))/2;
		cout << ans << "\n";
	}
}