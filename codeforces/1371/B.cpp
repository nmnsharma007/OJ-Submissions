#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = 1e9+7;
int main()
{
	int t;
	cin >> t;
	while(t--){
		ll n,r;
		cin >> n >> r;
		ll ans = 0;
		if(r < n){
			ans = (r*(r+1))/2LL;
		}
		else{
			ans = (n*(n-1))/2LL;
			ans++;
			//ll temp = r-n+1;
			//ans += (temp*(temp+1))/2LL;
		}
		cout << ans << "\n";
	}
	return 0;
}
