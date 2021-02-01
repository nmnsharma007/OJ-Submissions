#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e5+5;
vector<int> adj[N];
int dist[18][N];

void bfs(int pos,int node,int n){
	for(int i = 0; i < n;++i){
		dist[pos][i] = 1e8;
	}
	queue<int> q;
	q.push(node);
	vector<bool> visited(n,false);
	visited[node] = true;
	dist[pos][node] = 0;
	while(!q.empty()){
		int cur_node = q.front();
		q.pop();
		for(int i = 0; i < (int)adj[cur_node].size();++i){
			int next_node = adj[cur_node][i];
			if(!visited[next_node]){
				dist[pos][next_node] = dist[pos][cur_node]+1;
				q.push(next_node);
				visited[next_node] = true;
			}
		}
	}
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n,m;
	cin >> n >> m;
	for(int i = 1; i <= m;++i){
		int a,b;
		cin >> a >> b;
		--a,--b;
		adj[a].push_back(b);
		adj[b].push_back(a);
	}
	int k;
	cin >> k;
	int c[k];
	int dp[1 << k][k];	
	for(int i = 0; i < k;++i){
		cin >> c[i];
		--c[i];
		bfs(i,c[i],n);
		dp[0][i] = 1e8;
	}
	for(int mask = 1;mask < (1 << k);++mask){
		if(__builtin_popcount(mask) == 1){
			for(int pos = 0;pos < k;++pos){
				if(mask&(1 << pos))
					dp[mask][pos] = 1;
				else
					dp[mask][pos] =  1e8;
			}
			continue;
		}
		for(int pos = 0;pos < k;++pos){
			dp[mask][pos] = 1e8;
			if((mask&(1 << pos)) == 0)
				continue;
			for(int from = 0;from < k;++from){
				if((mask&(1 << from)) == 0)
					continue;
				if(pos == from)
					continue;
				dp[mask][pos] = min(dp[mask][pos],dp[mask^(1 << pos)][from]+dist[from][c[pos]]);
			}
		}
	}
	int ans = 1e8;
	for(int i = 0; i < k;++i){
		ans = min(ans,dp[(1<<k)-1][i]);
	}
	if(ans == 1e8)
		ans = -1;
	cout << ans << "\n";
}
