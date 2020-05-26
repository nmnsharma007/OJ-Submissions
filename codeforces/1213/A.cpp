#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll n;
	cin >> n;
	ll arr[n];
	for(int i=0;i<n;i++)
		cin >> arr[i];
	ll ans = 100000000;
	ll count = 0;
	sort(arr,arr+n);
	for(int i=0;i<n;i++)
	{
		count = 0;
		for(int j=0;j<n;j++)
		{
			ll dif = abs(arr[i]-arr[j]);
			if(dif%(ll)2 == 1)
				count++;
		}
		ans = min(ans,count);
	}
	cout << ans << "\n";
}