#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e5+5;
vector<int> adj[N];
vector<int> dp(N);
vector<double> prob(N);
void dfs(int cur_node,int parent)
{
	double k = adj[cur_node].size();
	if(parent != -1){
		dp[cur_node] = 1 + dp[parent];
		k = adj[cur_node].size()-1;
	}
	for(int i = 0; i < (int)adj[cur_node].size();++i){
		int next_node = adj[cur_node][i];
		if(parent == next_node)
			continue;
		prob[next_node] = prob[cur_node] * (double)(1/k);
		dfs(next_node,cur_node);
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
	dp[1] = 0;
	prob[1] = 1.0;
	dfs(1,-1);
	double ans = 0.0;
	for(int i = 2; i <= n;++i){
		if(adj[i].size() == 1){
			ans = ans + dp[i] * prob[i];
		}
	}
	printf("%.12lf\n",ans);
}
