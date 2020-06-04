#include<bits/stdc++.h>
using namespace std;
#define MIN(a,b,c) min(a,min(b,c))
using ll = long long;
int main()
{
	int q;
	cin >> q;
	while(q--)
	{
		int c,m,x;
		cin >> c >> m >> x;
		ll temp = MIN(c,m,x);
		ll ans = temp;
		c -= temp;
		m -= temp;
		x -= temp;
		if(c == 0 || m == 0)
			cout << ans << "\n";
		else
		{
			ans += MIN(c,m,(c+m)/3);
			cout << ans << "\n";
		}
	}
}