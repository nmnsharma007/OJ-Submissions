#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = 1e9+7;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	string s;
	cin >> s;
	int n = s.length();
	ll dp[n+1];
	memset(dp,-1,sizeof(dp));
	int count1 = 0,count2 = 0;
	for(int i = 0; i < (int)s.length();++i){
		if(s[i] == 'w')
			count1++;
		if(s[i] == 'm')
			count2++;
	}
	if(count1 || count2)
		cout << "0\n";
	else{
		dp[0] = 1;
		dp[1] = 1;
		for(int i = 1; i < n;++i){
			if(s[i] != 'u' && s[i] != 'n'){
				dp[i+1] = dp[i];
				continue;
			}
			if(s[i] == 'u' && s[i-1] != 'u'){
				dp[i+1] = dp[i];
				continue;
			}
			if(s[i] == 'n' && s[i-1] != 'n'){
				dp[i+1] = dp[i];
				continue;
			}
			dp[i+1] = (dp[i] + dp[i-1])%MOD;
		}
		cout << dp[n] << "\n";
	}
}