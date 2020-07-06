#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = 1e9+7;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n,k;
	cin >> n >> k;
	ll arr[n];
	int negative = 0;
	for(int i = 0; i < n;i++){
		cin >> arr[i];
		if(arr[i] < 0)
			negative++;
	}
	ll ans = 1;
	sort(arr,arr+n);
	if(n == k){
		for(int i = 0; i < n;i++){
			ans = ((ans*arr[i])%MOD + MOD)%MOD;
		}
		cout << ans << "\n";
	}
	else if(negative == n){
		if(k&1){
			for(int i = n-1; i > n-k-1;i--){
				ans = ((ans * arr[i])%MOD + MOD)%MOD;
			}
		}
		else{
			for(int i = 0; i < k;i++){
				ans = ((ans * arr[i])%MOD + MOD)%MOD;
			}
		}
		cout << ans << "\n";
	}
	else{
		int left = 0;
		int right = n-1;
		if(k&1){
			k--;
			ans = ((ans * arr[right])%MOD + MOD) %MOD;
			right--;
		}
		while(k){
			if(k > 1){
				ll temp = 1;
				if(arr[left] * arr[left+1] > arr[right]*arr[right-1]){
				    temp = ((arr[left] * arr[left+1])%MOD + MOD)%MOD;
					left += 2;
				}
				else{
					temp = ((arr[right] * arr[right-1])%MOD + MOD)%MOD;
					right -= 2;
				}
				ans = ((ans * temp)%MOD + MOD)%MOD;
				k -= 2;
			}
			else{
				ans = ((ans * arr[right--])%MOD + MOD)%MOD;
				k--;
			}
		}
		cout << ans << "\n";
	}
}