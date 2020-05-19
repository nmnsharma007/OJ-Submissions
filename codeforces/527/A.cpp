#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll a,b;
	cin >> a >> b;
	ll max_side = max(a,b);
	ll min_side = min(a,b);
	ll ans = 0;
	if(max_side % min_side == 0)
		cout << max_side/ min_side;
	else
	{
		while(max_side != min_side && min_side > 0)
		{	
			ans += (max_side/min_side);
			ll temp = min_side;
			min_side = max_side % min_side;
			max_side = temp;
		}
		cout << ans;
	}
}
