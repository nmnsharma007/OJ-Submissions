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
		int arr[n+2];
		for(int i = 1; i <= n;++i){
			cin >> arr[i];
		}
		arr[0] = arr[1],arr[n+1] = arr[n];
		vector<int> pref(n+2,0),sum(n+2,0),suf(n+2,0);
		for(int i = 2; i <= n-1;++i){
			if(arr[i] > arr[i+1] && arr[i] > arr[i-1])
				sum[i] = 1;
			if(arr[i] < arr[i+1] && arr[i] < arr[i-1])
				sum[i] = 1;
		}
		for(int i = 1; i <= n;++i){
			pref[i] = pref[i-1] + sum[i];
		}
		for(int i = n-1; i >= 1;--i){
			suf[i] = suf[i+1] + sum[i];
		}
		int ans = pref[n];
		for(int i = 2; i <= n-1;++i){
			if((arr[i] > arr[i-1] && arr[i] > arr[i+1]) || (arr[i] < arr[i-1] && arr[i] < arr[i+1])){
				int temp = arr[i-1];
				int cnt = 0;
				if((arr[i+1] > temp && arr[i+1] > arr[i+2]) || (arr[i+1] < temp && arr[i+1] < arr[i+2]))
					++cnt;
				ans = min(ans,cnt+pref[i-2]+suf[i+2]);
				cnt = 0;
				temp = arr[i+1];
				if((arr[i-1] > temp && arr[i-1] > arr[i-2]) || (arr[i-1] < temp && arr[i-1] < arr[i-2]))
					++cnt;
				ans = min(ans,cnt+pref[i-2]+suf[i+2]);
			}
		}
		if(n >= 4)
			ans = min(ans,suf[3]);
		if(n >= 4)
			ans = min(ans,pref[n-2]);
		cout << ans << "\n";
	}
}
