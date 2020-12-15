#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--){
		ll n;
		cin >> n;
		ll arr[n];
		ll sum = 0;
		for(int i = 0; i < n;++i){
			cin >> arr[i];
			sum += arr[i];
		}
		ll ans = 1e10;
		for(ll i = 1;i*i <= sum;++i){
			if(sum%i != 0)
				continue;
			ll val = i;
			bool exist = true;
			ll cnt = 0;
			for(int k = 0; k < n;++k){
				int j = k;
				ll temp = 0;
				while(j < n && temp < val){
					temp += arr[j];
					++cnt;
					++j;
				}
				if(temp != val){
					exist = false;
					break;
				}
				--cnt;
				k = j-1;
			}
			cnt = n-cnt;
			if(exist && cnt*val == sum)
				ans = min(ans,n-cnt);
			val = sum/i;
			cnt = 0;
			exist = true;
			for(int k = 0; k < n;++k){
				int j = k;
				ll temp = 0;
				while(j < n && temp < val){
					temp += arr[j];
					++cnt;
					++j;
				}
				if(temp != val){
					exist = false;
					break;
				}
				--cnt;
				k = j-1;
			}
			cnt = n-cnt;
			if(exist && cnt*val == sum)
				ans = min(ans,n-cnt);
		}
		cout << ans << "\n";
	}
}
