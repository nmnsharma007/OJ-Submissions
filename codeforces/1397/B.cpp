#include<bits/stdc++.h>
using namespace std;
using ll = long long;
ll power(ll x,int y)
{
	if(y == 0)
		return 1;
	ll res = 1;
	while(y){
		if(y%2)
			res = res * x;
		x = x*x;
		y /= 2;
	}
	return res;
}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	ll arr[n];
	for(int i = 0; i < n;++i){
		cin >> arr[i];
	}
	ll ans = 1e18;
	sort(arr,arr+n);
	for(int i = 1;;++i){
		ll cost = 0;
		for(int j = 0; j < n;++j){
			cost += abs(arr[j] - power((ll)i,j));
			if(cost >= ans)
				break;
		}
		if(cost < ans)
			ans = cost;
		else
			break;
	}
	cout << ans << "\n";
}	