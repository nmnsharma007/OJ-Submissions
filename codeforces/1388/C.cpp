#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e5+5;
vector<int> adj[N];
vector<int> people(N);
vector<int> happiness(N);
bool visited[N];
ll pvisit[N];
ll good[N];
int parent[N];
int flag = 1;
void dfs(int cur_node)
{
	visited[cur_node] = true;
	pvisit[cur_node] = people[cur_node];
	for(int i = 0; i < (int)adj[cur_node].size();++i){
		int next_node = adj[cur_node][i];
		if(next_node == parent[cur_node])
			continue;
		parent[next_node] = cur_node;
		if(!visited[next_node])
			dfs(next_node);
		pvisit[cur_node] += pvisit[next_node];
	}
	if((pvisit[cur_node]+happiness[cur_node])%2){
		flag = 0;
		return;
	}
	good[cur_node] = (pvisit[cur_node] + happiness[cur_node])/2LL;
	if(good[cur_node] > pvisit[cur_node] || good[cur_node] < 0){
		flag = 0;
		return;
	}
}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--){
		int n,m;
		cin >> n >> m;
		for(int i = 1; i <= n;++i){
			cin >> people[i];
			adj[i].clear();
		}
		for(int i = 1; i <= n;++i){
			cin >> happiness[i];
		}
		for(int i = 0; i < n-1;++i){
			int x,y;
			cin >> x >> y;
			adj[x].push_back(y);
			adj[y].push_back(x);
		}
		flag = 1;
		parent[1] = 0;
		memset(visited,false,sizeof(visited));
		dfs(1);
		for(int i = 1; i <= n;++i){
			ll sum = 0;
			for(int j = 0; j < (int)adj[i].size();++j){
				int next_node = adj[i][j];
				if(next_node == parent[i])
					continue;
				sum += good[next_node];
			}
			if(sum > good[i]){
				flag = 0;
				break;
			}
		}
		if(flag)
			cout << "YES\n";
		else
			cout << "NO\n";
	}
}