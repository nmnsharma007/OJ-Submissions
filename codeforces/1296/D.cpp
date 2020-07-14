#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	ll a, n,b,k;
	cin >> n >> a >> b >> k;
	ll arr[n];
	for(int i = 0; i < n;i++){
		cin >> arr[i];
		arr[i] = arr[i]%(a+b);
		if(arr[i] == 0)
			arr[i] += (a+b);
		arr[i] = (arr[i] + a-1)/a - 1;
	}
	sort(arr,arr+n);
	ll sum = 0;
	int ans = 0;
	for(int i = 0; i < n;i++){
		sum += arr[i];
		if(sum <= k)
			ans++;
		else{
			break;
		}
	}
	cout << ans << "\n";
}
