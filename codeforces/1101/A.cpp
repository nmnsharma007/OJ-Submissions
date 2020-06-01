#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
	int q;
	cin >> q;
	while(q--)
	{
		ll r,l,d;
		cin >> l >> r >> d;
		ll div = l/d;
		if(l%d == 0)
		{
			div--;
			if(div >= 1)
				cout << d << "\n";
			else
			{
				ll ans = d * ((r+d-1)/d);
				if(ans == r)
					ans += d;
				cout << ans << "\n";
			}
		}
		else
		{
			if(div >= 1)
				cout << d << "\n";
			else
			{
				ll ans = d*((r+d-1)/d);
				if(ans == r)
					ans += d;
				cout << ans << "\n";
			}
		}
	}
}