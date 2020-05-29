#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--){
		int n,m,x,y;
		cin >> n >> m >> x >> y;
		int ans = 0;
		int dp[1001];
		memset(dp,-1,sizeof(dp));
		dp[1] = x;
		for(int i=0;i<n;i++){
			string s;
			cin >> s;
			int count = 0;
			for(int j=0;j<m;j++){
				if(s[j] == '.')
					count++;
				else{
					if(dp[count] != -1)
						ans += dp[count];
					else{
						int min_cost = 10000000;
						for(int i=0;i<=count/2;i++){
							min_cost = min(y*i + x*(count - 2*i),min_cost);
						}
						ans += min_cost;
						dp[count] = min_cost;
					}
					count = 0;
				}
			}
			if(dp[count] != -1)
				ans += dp[count];
			else{
				int min_cost = 10000000;
				for(int i=0;i<=count/2;i++){
					min_cost = min(y*i+x*(count-2*i),min_cost);
				}
				ans += min_cost;
				dp[count] = min_cost;
			}
		}
		cout << ans << "\n";
	}
}