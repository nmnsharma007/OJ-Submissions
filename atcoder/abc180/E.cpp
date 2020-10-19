#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 20;
int graph[N][N],dp[1<<N][N];
int solve(int visited_all,int n,int mask,int pos)
{
	if(mask == visited_all)
		return graph[pos][0];
	if(dp[mask][pos] != -1)
		return dp[mask][pos];
	int ans = INT_MAX;
	for(int city = 0; city < n;++city){
		if((mask&(1<<city)) == 0){
			int min_ans = graph[pos][city] + solve(visited_all,n,mask|(1<<city),city);
			ans = min(min_ans,ans);
		}
	}
	return dp[mask][pos] = ans;
}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	vector<pair<pair<int,int>,int> > points;
	for(int i = 0; i < n;++i){
		int x,y,z;
		cin >> x >> y >> z;
		points.push_back({{x,y},z});
	}
	memset(dp,-1,sizeof(dp));
	for(int i = 0; i < n;++i){
		int x = points[i].first.first;
		int y = points[i].first.second;
		int z = points[i].second;
		for(int j = 0; j < n;++j){
			int p = points[j].first.first;
			int q = points[j].first.second;
			int r = points[j].second;
			graph[i][j] = abs(p-x) + abs(q-y) + max(0,z-r);
		}
	}
	int ans = solve((1<<n)-1,n,1,0);
	cout << ans << "\n";
}

