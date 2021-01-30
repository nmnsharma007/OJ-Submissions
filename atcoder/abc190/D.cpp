#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	ll n;
	cin >> n;
	int ans = 0;
	n *= 2LL;
	for(ll m = 1;m*m <= n;++m){
		if(n%m == 0){
			if((n/m)%2LL == (m-1)%2LL)
				++ans;
			ll div = n/m;
			if(div == m)
				continue;
			if((n/div)%2LL == (div-1)%2LL)
				++ans;
		}
	}
	cout << ans << "\n";
}
