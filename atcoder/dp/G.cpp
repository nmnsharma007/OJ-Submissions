#include<bits/stdc++.h>
using namespace std;
const int N = 100001;
vector<int> adj[N];
vector<bool> visited(N);
vector<int> dp(N,0);
void dfs(int cur_node)
{
	visited[cur_node] = true;
	for(int i=0;i<(int)adj[cur_node].size();i++){
		int next_node = adj[cur_node][i];
		if(!visited[next_node])
			dfs(next_node);
		dp[cur_node] = max(dp[cur_node],1+dp[next_node]);
	}
}
int main()
{
	int nodes,edges;
	cin >> nodes >> edges;
	for(int i=0;i<edges;i++){
		int x,y;
		cin >> x >> y;
		adj[x].push_back(y);
	}
	for(int i=1;i<=nodes;i++){
		if(!visited[i])
			dfs(i);
	}
	int answer = 0;
	for(int i=1;i<=nodes;i++)
		answer = max(answer,dp[i]);
	cout << answer << "\n";
}