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
		ll p,q;
		cin >> p >> q;
		if(p%q)
			cout << p << "\n";
		else{
			ll ans = 0;
			vector<ll> primes;
			ll temp_q = q;
			for(ll i = 2; i*i <= q;++i){
				if(q%i == 0){
					primes.push_back(i);
					while(q%i == 0){
						q /= i;
					}
				}
			}
			if(q > 1)
				primes.push_back(q);
			for(auto x : primes){
				ll temp_p = p;
				while(temp_p%temp_q == 0){
					temp_p /= x;
				}
				ans = max(ans,temp_p);
			}
			cout << ans << "\n";
		}
	}
}