#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 2e5+5;
vector<int> adj[N];
bool visited[N];
int flag = 1;
ll edges,nodes;

void dfs(int cur_node)
{
	visited[cur_node] = true;
	++nodes;
	edges += adj[cur_node].size();
	for(int i = 0; i < (int)adj[cur_node].size();++i){
		int next_node = adj[cur_node][i];
		if(visited[next_node])
			continue;
		dfs(next_node);
	}
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n,m;
	cin >> n >> m;
	for(int i = 0; i < m;++i){
		int a,b;
		cin >> a >> b;
		adj[a].push_back(b);
		adj[b].push_back(a);
	}
	memset(visited,false,sizeof(visited));
	for(int i = 1; i <= n;++i){
		if(!visited[i]){
			nodes = 0;
			edges = 0;
			dfs(i);
			edges /= 2LL;
			if(edges != (nodes*(nodes-1LL))/2LL){
				flag = 0;
				break;
			}
		}
	}
	if(flag)
		cout << "YES\n";
	else
		cout << "NO\n";
}
