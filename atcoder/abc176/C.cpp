#include<bits/stdc++.h>
using namespace std;
using ll = long long;
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
	ll maxi = arr[0];
	ll ans = 0;
	for(int i = 1; i < n;++i){
		if(arr[i] < maxi){
			ans += maxi - arr[i];
			arr[i] = maxi;
		}
		maxi = max(arr[i],maxi);
	}
	cout << ans << "\n";
}