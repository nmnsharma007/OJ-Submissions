#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll calc(ll f)
{
	return (f*(3*f+1))/2;
}
int main()
{
	ll n;
	cin >> n;
	ll left = 0;
	ll right = 1000000;
	while(left < right)
	{
		ll mid = left + (right-left+1)/2;
		if(calc(mid) <= n)
			left = mid;
		else
			right = mid-1;
	}
	ll f = left;
	while((n+f)%3)
	{
		f--;
	}
	ll ans = (f+2)/3;
	cout << ans;
}
