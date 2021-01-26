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
		set<int> s;
		int maxi = 0;
		vector<int> dp(N,0);
		for(int i = 0; i < n;++i){
			int x;
			cin >> x;
			maxi = max(maxi,x);
			s.insert(x);
			++dp[x];
		}
		set<int>::reverse_iterator rit;
		int ans = 0;
		for(rit = s.rbegin();rit != s.rend();++rit){
			int x = *rit;
			int cnt = dp[x];
			for(int num = 2*x;num <= maxi;num += x){
				dp[x] = max(dp[x],cnt+dp[num]);
			}
			ans = max(ans,dp[x]);
		}
		cout << n-ans << "\n";
	}
}
