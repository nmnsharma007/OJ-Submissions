#include<bits/stdc++.h>
using namespace std;
using ll = long long;
ll solve(ll r,ll lcm,ll b)
{
	ll num_of_blocks = r/lcm;
	ll ans = r;
	ans = ans - min(b-1,r);
	if(num_of_blocks > 0){
		ans = ans - (num_of_blocks-1LL)*b;
       	ans = ans - min(b,r-num_of_blocks*lcm+1);
	}
	return ans;
}
int main()
{
	int t;
	cin >> t;
	while(t--){
		ll a,b;
		int q;
		cin >> a >> b >> q;
		if(a > b)
			swap(a,b);
		ll lcm = (a*b)/__gcd(a,b);
		while(q--){
			ll l,r;
			cin >> l >> r;
			if(r < b){
				cout << "0 ";
				continue;
			}
			ll ans = solve(r,lcm,b);
			ans -= solve(l-1,lcm,b);
			cout << ans << " ";
		}
		cout << "\n"; 
	}
}