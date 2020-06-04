#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
	int n;
	cin >> n;
	ll arr[n];
	for(int i=0;i<n;i++)
		cin >> arr[i];
	ll result = arr[0];
	for(int i=1;i<n;i++)
		result = __gcd(result,arr[i]);
	vector<int> v;
	ll ans = 1;
	if(result != 1)
	{	
		for(ll i=1;i*i< result;i++)
		{
			if(result%i == 0)
			{
				v.push_back(i);
				v.push_back(result/i);
			}
		}
		ans = v.size();
		ll temp = sqrt(result);
		if(temp*temp == result)
			ans++;
	}
	else
		ans = 1;
	cout << ans << "\n";
}