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
		int n,k;
		cin >> n >> k;
		int ans = 1e9+7;
		int arr[n+1];
		for(int i = 1; i <= n;++i){
			cin >> arr[i];
		}
		for(int paint = 1;paint <= 100;++paint){
			int cnt = 0;
			for(int i = 1; i <= n;++i){
				if(arr[i] == paint)
					continue;
				++cnt;
				i += k-1;
			}
			ans = min(ans,cnt);
		}
		cout << ans << "\n";
	}
}
