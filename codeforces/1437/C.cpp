#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const ll MOD = 1e9+7;
const int N = 205;
int memo[N][2*N],arr[N];

int solve(int i,int t)
{
	if(t == 0 && i >= 0)
		return 1e7;
	if(t == 0 && i < 0)
		return 0;
	if(i < 0)
		return 0;
	if(memo[i][t] != -1)
		return memo[i][t];
	return memo[i][t] = min(solve(i,t-1),abs(arr[i]-t)+solve(i-1,t-1));
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int q;
	cin >> q;
	while(q--){
		int n;
		cin >> n;
		memset(memo,-1,sizeof(memo));
		for(int i = 0; i < n;++i){
			cin >> arr[i];
		}
		sort(arr,arr+n);
		int ans = solve(n-1,2*n);
		cout << ans << "\n";
	}
} 
