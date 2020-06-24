#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = 1e9+7;
const int N = 2000000 + 5;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);		
	vector<ll> infant(N+1);
	vector<ll> edge(N+1);
	vector<ll> claw(N+1);
	vector<ll> ans(N+1);
	infant[1] = 1;
	infant[2] = 1;
	edge[2] = 1;
	for(int i=3;i<=N;i++){
		infant[i] = (infant[i-1] + 2LL * edge[i-1])%MOD;
		edge[i] = infant[i-1]%MOD;
		claw[i] = edge[i-1]%MOD;
		ans[i] = (ans[i-3] + claw[i]*4LL)%MOD;
	}
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		cout << ans[n]%MOD << "\n";
	}
}