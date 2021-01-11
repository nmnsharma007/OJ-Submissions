#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	ll arr[n],b[n];
	for(int i = 0;i < n;++i){
		cin >> arr[i];
		ll temp = 1;
		while(temp <= arr[i]){
			temp *= 2LL;
		}
		temp /= 2LL;
		b[i] = temp;
	}
	for(int i = 1; i <= n-2;++i){
		if(b[i-1] == b[i] && b[i] == b[i+1]){
			cout << "1\n";
			return 0;
		}
	}
	int ans = 1e8;
	for(int l = 0;l < n;++l){
		ll prev = arr[l];
		for(int m = l+1; m < n;++m){
			ll next = 0;
			for(int r = m;r < n;++r){
				next ^= arr[r];
				if(prev > next){
					ans = min(ans,r-l-1);
					break;
				}
			}
			prev ^= arr[m];
		}
	}
	if(ans == 1e8)
		ans = -1;
	cout << ans << "\n";
}
