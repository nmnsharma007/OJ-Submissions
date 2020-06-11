#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--){
		int n,m;
		cin >> n >> m;
		string s;
		cin >> s;
		int p[m];
		for(int i=0;i<m;i++)
			cin >> p[i];
		int dp[n+1][27];
		memset(dp,0,sizeof(dp));
		for(int i=0;i<n;i++){
			for(int j=1;j<=26;j++){
				dp[i+1][j] = dp[i][j] + ((1) ? (s[i]-'a'+1==j) : 0);
			}
		}
		int freq[27];
		memset(freq,0,sizeof(freq));
		for(int i=0;i<m;i++){
			for(int j=1;j<=26;j++){
				freq[j] += dp[p[i]][j];
			}
		}
		for(int i=0;i<n;i++)
			freq[s[i]-'a'+1]++;
		for(int i=1;i<=26;i++)
			cout << freq[i] << " ";
		cout << "\n";
	}
}