#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		ll x1,y1,x2,y2;
		cin >> x1 >> y1 >> x2 >> y2;
		ll ans = abs(y1-y2)*abs(x1-x2) + 1;
		cout << ans << "\n";
	}
}