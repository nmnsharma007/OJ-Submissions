#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 2*1e5+5;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int maxi = 0;
		vector<int> dp(N,0);
		for(int i = 0; i < n;++i){
			int x;
			cin >> x;
			maxi = max(maxi,x);
			++dp[x];
		}
		int ans = 0;
		for(int i = N-1; i >= 1;--i){
			int cnt = dp[i];
			for(int num = 2*i;num <= maxi;num += i){
				dp[i] = max(dp[i],cnt+dp[num]);
			}
			ans = max(ans,dp[i]);
		}
		cout << n-ans << "\n";
	}
}
