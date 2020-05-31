#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,c,k;
	cin >> a >> b >> c >> k;
	int ans = min(a,k);
	k = max(0,k-a);
	if(k)
	{
		k = max(0,k-b);
		if(k)
		{
			ans -= k;
			cout << ans << "\n";
		}
		else
			cout << ans << "\n";
	}
	else
		cout << ans << "\n";
}