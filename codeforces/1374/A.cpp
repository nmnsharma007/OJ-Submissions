#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = 1e9+7;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--){
		ll x,y,n;
		cin >> x >> y >> n;
		ll num = n/x;
		ll k = num * x + y;
		if(k > n)
			k = k - x;
		cout << k << "\n";
	}
	return 0;
}
