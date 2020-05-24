#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll n;
	cin >> n;
	if(n%2 == 0)
	{
		ll ans = n/2;
		cout << ans << "\n";
	}
	else
	{
		ll ans = -(n+1)/2;
		cout << ans << "\n";
	}
}