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
		ll a,b,x,y,n;
		cin >> a >> b >> x >> y >> n;
		ll ans = 1e18+5;
		ll dif1 = a-x;
		ll dif2 = b-y;
		if(dif1+dif2 <= n){
			ans = min(ans,x*y);
		}
		if(dif1 <= n){
			ans = min(ans,x * max(y,(b - (n-dif1))));
		}
		if(dif2 <= n){
			ans = min(ans,y * max(x,(a - (n-dif2))));
		}
		if(dif1 > n){
			ans = min(ans,(a-n) * b);
		}
		if(dif2 > n){
			ans = min(ans,(b-n) * a);
		}
		cout << ans << "\n";
	}
}
