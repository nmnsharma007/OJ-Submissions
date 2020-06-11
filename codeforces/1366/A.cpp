#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		ll a,b;
		cin >> a >> b;
		ll ans = min(a,min(b,(a+b)/3));
		cout << ans << "\n";
	}
}