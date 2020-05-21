#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
int main()
{
	ll n;
	cin >> n;
	ll a[n],b[n];
	for(int i=0;i<n;i++)
		cin >> a[i];
	for(int i=0;i<n;i++)
		cin >> b[i];
	vector<ll> c(n);
	for(int i=0;i<n;i++)
		c[i] = a[i]-b[i];
	sort(c.begin(),c.end());
	ll ans = 0;
	for(int i=0;i<n;i++)
	{
		if(c[i] > 0)
		{
			int index =  lower_bound(c.begin(),c.end(),-c[i]+1)- c.begin();
			ans += (i-index);
		}
	}
	cout << ans;
}
