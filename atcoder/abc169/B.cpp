#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const ll N = 1000000000000000000;
int main()
{
	ll n;
	cin >> n;
	ll arr[n];
	for(int i=0;i<n;i++)
		cin >> arr[i];
	sort(arr,arr+n);
	ll ans = 1;
	if(arr[0] == 0)
		ans = 0;
	else
	{
		for(ll i=0;i<n;i++)
		{
			ll temp = N/ans;
			if(temp >= arr[i])
				ans = ans * arr[i];
			else
			{
				ans = -1;
				break;
			}
		}
	}
	cout << ans;
}