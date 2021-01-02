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
	ll suma = 0,sumb = 0;
	for(int i = 0; i < n;++i){
		ll a,b;
		cin >> a >> b;
		arr[i] = 2*a+b;
		suma += a;
	}
	int ans = 0;
	sort(arr,arr+n);
	for(int i = n-1; i >= 0;--i){
		sumb += arr[i];
		++ans;
		if(sumb > suma)
			break;
	}
	cout << ans << "\n";
}
