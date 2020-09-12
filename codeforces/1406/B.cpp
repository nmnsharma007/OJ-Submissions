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
		ll arr[n];
		int pcount = 0,zcount = 0,ncount = 0;
		for(int i = 0;i < n;++i){
			cin >> arr[i];
			if(arr[i] > 0)
				++pcount;
			else if(arr[i] == 0)
				++zcount;
			else if(arr[i] < 0)
				++ncount;
		}
		ll ans = 1;
		sort(arr,arr+n);
		if(pcount == n || ncount == n){
			for(int i = n-1; i >= n-5;--i){
				ans = ans * arr[i];
			}
		}
		else if(pcount == 1 || pcount == 2){
			for(int i = 0; i < 4;++i){
				ans = ans * arr[i];
			}
			ans = ans * arr[n-1];
		}
		else if(pcount >= 3){
			ll temp = 1;
			for(int i = 0; i < 4;++i){
				temp = temp * arr[i];
			}
			temp = temp * arr[n-1];
			ans = temp;
			temp = 1;
			for(int i = 0; i < 2;++i){
				temp = temp * arr[i];
			}
			temp = temp * arr[n-1] * arr[n-2] * arr[n-3];
			ans = max(ans,temp);
			temp = 1;
			for(int i = n-1; i >= n-5;--i){
				temp = temp * arr[i];
			}
			ans = max(ans,temp);
		}
		else if(pcount == 0){
			ans = 0;
		}
		cout << ans << "\n";
	}
}
