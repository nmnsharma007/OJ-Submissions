#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e5+5;
vector<int> adj[N];
bool visited[N];
vector<double> dp(N);
void dfs(int cur_node,int parent)
{
	visited[cur_node] = true;
	int k;
	if(parent == -1)
		k = adj[cur_node].size();
	else
		k = adj[cur_node].size()-1;
	dp[cur_node] = 0.0;
	for(int i = 0; i < (int)adj[cur_node].size();++i){
		int next_node = adj[cur_node][i];
		if(next_node == parent)
			continue;
		dfs(next_node,cur_node);
		dp[cur_node] = dp[cur_node] + (double)(dp[next_node]+1)/(double)k;
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	for(int i = 0; i < n-1;++i){
		int u,v;
		scanf("%d%d",&u,&v);
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	memset(visited,false,sizeof(visited));
	dp[1] = 0;
	dfs(1,-1);
	printf("%.12lf\n",dp[1]);
}
