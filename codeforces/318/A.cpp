#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll n,k;
	cin >> n >> k;
	if(n%2 == 0)
	{
		ll ans;
		if(k <= n/(ll)2)
			ans = 2*k - 1;
		else
			ans = 2*k - n;
		cout << ans << "\n";
	}
	else
	{
		ll ans;
		if(k <= (n+1)/(ll)2)
			ans = 2*k - 1;
		else
			ans = 2*k - n - 1;
		cout << ans << "\n";
	}
}