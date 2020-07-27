#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e5+5;
const ll INF = 1e17;
vector<pair<int,ll>> adj[N];
vector<ll> dist(N,INF);
vector<pair<pair<int,int>,ll>> edge;
int ans = 0;
void djk(int src)
{
	priority_queue<pair<pair<ll,int>,int>,vector<pair<pair<ll,int>,int>>,greater<pair<pair<ll,int>,int>>> pq;
	pq.push({{0,src},0});
	dist[src] = 0;
	while(!pq.empty()){
		int cur_node = pq.top().first.second;
		ll cur_dist = pq.top().first.first;
		int prev_node = pq.top().second;
		pq.pop();
		if(dist[cur_node] < cur_dist)
			continue;
		for(int i = 0; i < (int)adj[cur_node].size();++i){
			int next_node = adj[cur_node][i].first;
			ll w = adj[cur_node][i].second;
			if(dist[next_node] > dist[cur_node] + w){
				dist[next_node] = dist[cur_node] + w;
				pq.push({{dist[next_node],next_node},cur_node});
			}
		}
	}
}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n,m,s;
	cin >> n >> m >> s;
	for(int i = 0; i < m;++i){
		int u,v;
		ll w;
		cin >> u >> v >> w;
		adj[u].push_back({v,w});
		adj[v].push_back({u,w});
		edge.push_back({{u,v},w});
	}
	ll l;
	cin >> l;
	djk(s);
	int ans = 0;
	for(int i = 1; i <= n;++i){
		if(dist[i] == l)
			++ans;
	}
	for(int i = 0; i < (int)edge.size();++i){
		int u = edge[i].first.first;
		int v = edge[i].first.second;
		ll w = edge[i].second;
		if(dist[u] < l && dist[u] + w > l && w - (l-dist[v]) + dist[u] >= l)
			++ans;
		if(dist[v] < l && dist[v] + w > l && w - (l-dist[u]) + dist[v] >  l)
			++ans;
//		if(dist[u] < l && dist[v] < l && dist[u] + dist[v] + w == 2*l)
//			++ans;
	}
	cout << ans << "\n";
}