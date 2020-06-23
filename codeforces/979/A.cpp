#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
	ll n;
	cin >> n;
	ll ans = (n&1) ? (n+1)/2LL : n+1;
	if(n == 0)
		ans = 0;
	cout << ans << "\n";
}