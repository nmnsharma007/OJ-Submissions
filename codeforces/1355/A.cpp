#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll getMin(ll n)
{
	ll min = 10;
	while(n)
	{
		ll rem = n%10;
		if(rem <= min)
			min = rem;
		n /= 10;
	}
	return min;
}
ll getMax(ll n)
{
	ll max = 0;
	while(n)
	{
		ll rem = n%10;
		if(rem >= max)
			max = rem;
		n /= 10;
	}
	return max;
}
int main()
{
	ll t,a,k;
	cin >> t;
	while(t--)
	{
		cin >> a >> k;
		ll ans = a;
		for(int i=0;i<k-1;i++)
		{
			ll min_digit = getMin(a);
			ll max_digit = getMax(a);
			if(min_digit == 0 || max_digit == 0)
			{
				ans = a;
				break;
			}
			else
				a = a + min_digit*max_digit;
			ans = a;
		}
		cout << ans << "\n";
	}
}
