#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n,m,k;
	cin >> n >> m >> k;
	set<int> s;
	for(int i = 0; i < k;++i){
		int x;
		cin >> x;
		s.insert(x);
	}
	vector<pair<double,double>> dp(n+m+1,{0,0});
	pair<double,double> next_m = {0,0};
	for(int i = n-1; i >= 0;--i){
		next_m.first += dp[i+1].first;
		next_m.second += dp[i+1].second;
		next_m.first -= dp[i+m+1].first;
		next_m.second -= dp[i+m+1].second;
		if(s.count(i)){
			dp[i] = {0,1};
		}
		else{
			dp[i].first = 1.0 + (next_m.first/m);
			dp[i].second = (1.0 * next_m.second)/m;
		}
	}
	double denom = 1.0 - dp[0].second;
	if(abs(denom) < 1e-10){
		cout << "-1\n";
		return 0;
	}
	double ans = dp[0].first/denom;
	cout << fixed << setprecision(10);
	cout << ans << "\n";
}
