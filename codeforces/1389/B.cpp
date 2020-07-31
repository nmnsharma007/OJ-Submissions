#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int tc;
	cin >> tc;
	while(tc--){
		int n,k,z;
		cin >> n >> k >> z;
		int arr[n+1];
		for(int i = 1; i <= n;++i){
			cin >> arr[i];
		}
		int ans = 0;
		for(int t = 0; t <= min(k/2,z);++t){
			int sum = 0;
			int maxi = 0;
			for(int i = 1; i <= k-2*t+1;++i){
				sum += arr[i];
			}
			for(int i = 1; i <= min(k-2*t+1,n-1);++i){
				maxi = max(maxi,arr[i] + arr[i+1]);
			}
			sum += t * maxi;
			ans = max(ans,sum);
		}
		cout << ans << "\n";
	}
}