#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 65;
ll dp[2][N];

ll solve(vector<string> &s,int result,int pos){
	if(pos >= (int)s.size()){
		if(result == 1)
			return 1;
		else
			return 0;
	}
	if(dp[result][pos] != -1)
		return dp[result][pos];
	if(s[pos] == "AND")
		return dp[result][pos] = solve(s,result&1,pos+1) + solve(s,result&0,pos+1);
	else
		return dp[result][pos] = solve(s,result|1,pos+1) + solve(s,result|0,pos+1);
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	memset(dp,-1,sizeof(dp));
	int n;
	cin >> n;
	vector<string> s(n+1);
	for(int i = 1; i <= n;++i){
		cin >> s[i];
	}
	ll ans = solve(s,1,1) + solve(s,0,1);
	cout << ans << "\n";
}
