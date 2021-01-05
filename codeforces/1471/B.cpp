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
		int n;
		cin >> n;
		ll x;
		cin >> x;
		ll arr[n];
		int pos = n;
		for(int i = 0; i < n;++i){
			cin >> arr[i];
			if(arr[i]%x != 0 && pos == n)
				pos = i;
		}
		ll ans = 0;
		if(pos == n){
			int mini = 1e6+6,index = -1;
			for(int i = 0; i < n;++i){
				ll temp = arr[i];
				int power = 0;
				while(temp%x == 0){
					++power;
					temp /= x;
				}
				if(power < mini){
					mini = power;
					index = i;
				}
			}
			for(int i = 0; i < index;++i){
				ans += (mini+2) * 1LL * arr[i];
			}
			for(int i = index; i < n;++i){
				ans += (mini+1) * 1LL * arr[i];
			}
		}
		else{
			for(int i = 0; i < pos;++i){
				ans += 2LL * arr[i];
			}
			for(int i = pos; i < n;++i){
				ans += arr[i];
			}
		}
		cout << ans << "\n";
	}
}
