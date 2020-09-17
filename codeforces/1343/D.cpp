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
		int arr[n];
		for(int i = 0; i < n;++i){
			cin >> arr[i];
		}
		vector<int> freq(2*k+1,0);
		vector<int> pref(2*k+1,0);
		for(int i = 0; i < n/2;++i){
			++freq[arr[i]+arr[n-i-1]];
			int min_sum = min(arr[i]+1,arr[n-i-1]+1);
			int max_sum = max(arr[i]+k,arr[n-i-1]+k);
			++pref[min_sum];
			if(max_sum < 2*k)
			--pref[max_sum+1];
		}
		for(int i = 3; i <= 2*k;++i){
			pref[i] += pref[i-1];
		}
		int ans = 1e9+7;
		for(int i = 2; i <= 2*k;++i){
			ans = min(ans,pref[i]-freq[i] + (n/2 - pref[i])*2);
		}
		cout << ans << "\n";
	}
}

