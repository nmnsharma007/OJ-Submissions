#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 200001;
vector<int> adj[N];
vector<int> depth(N);
vector<int> cnt(N);
void dfs(int node,int parent,int level)
{
	depth[node] = level;
	cnt[node] = 1;
	for(auto i : adj[node])
	{
		if(i == parent)
			continue;
		dfs(i,node,level+1);
		cnt[node] += cnt[i];
	}
}
int main()
{
	int n,k;
	cin >> n >> k;
	for(int i=0;i<n-1;i++)
	{
		int u,v;
		cin >> u >> v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	dfs(1,-1,0);
	vector<int> contribution(n);
	for(int i=0;i<n;i++)
		contribution[i] = depth[i+1] - (cnt[i+1]-1);
	ll ans = 0;
	sort(contribution.begin(),contribution.end());
	reverse(contribution.begin(),contribution.end());
	for(int i=0;i<k;i++)
		ans += contribution[i];
	cout << ans << "\n";
}