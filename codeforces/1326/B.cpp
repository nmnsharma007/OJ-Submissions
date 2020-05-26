#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define MAX(a,b,c) max(a,max(b,c))
int main()
{
	ll n;
	cin >> n;
	ll b[n];
	for(int i=0;i<n;i++)
		cin >> b[i];
	ll a[n];
	a[0] = b[0];
	ll maxi = (ll)0;
	for(int i=1;i<n;i++)
	{
		maxi = max(maxi,a[i-1]);
		a[i] = b[i] + maxi;
	}
	for(int i=0;i<n;i++)
		cout << a[i] << " ";
}