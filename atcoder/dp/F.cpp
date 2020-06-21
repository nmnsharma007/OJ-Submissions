#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s,t;
	cin >> s >> t;
	int n = s.length();
	int m = t.length();
	int dp[n+1][m+1];// dp[i][j] is LCS with first i characters of s and first j characters of m
	vector<char> ans;
	for(int i=0;i<=n;i++){
		for(int j=0;j<=m;j++){
			if(i == 0 || j == 0){
				dp[i][j] = 0;
				continue;
			}
			if(s[i-1] == t[j-1])
				dp[i][j] = 1+dp[i-1][j-1];
			else
				dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
		}
	}
	int i=n;
	int j=m;
	while(i && j){
		if(s[i-1] == t[j-1]){
			ans.push_back(s[i-1]);
			i--;
			j--;
			continue;
		}
		if(dp[i-1][j] > dp[i][j-1])
			i--;
		else
			j--;
	}
	for(int i=ans.size()-1;i>=0;i--)
		cout << ans[i];
	cout << "\n";
}