#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const ll INF = 1000000000000000000;
const int N = 1e5+5;
vector<int> adj[N];
vector<bool> visited(N);
ll cost[N];
ll dfs(int cur_node)
{
	visited[cur_node] = true;
	ll min_cost = cost[cur_node];
	for(int i=0;i<(int)adj[cur_node].size();i++){
		int next_node = adj[cur_node][i];
		if(!visited[next_node]){
			min_cost = min(min_cost,dfs(next_node));
		}
	}
	return min_cost;
}
int main()
{
	int n,m;
	cin >> n >> m;
	for(int i=1;i<=n;i++)
		cin >> cost[i];
	for(int i=0;i<m;i++){
		int x,y;
		cin >> x >> y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	ll ans = 0;
	for(int i=1;i<=n;i++){
		if(!visited[i]){
			ans += dfs(i);
		}
	}
	cout << ans << "\n";
}