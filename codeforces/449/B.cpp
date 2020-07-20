#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const ll INF = 1e18;
const int N = 1e5+5;
vector<pair<pair<ll,ll>,ll> > adj[N];
vector<ll> dist(N,INF);
vector<ll> used(N,0);
void djk()
{
	priority_queue< pair<ll,ll>, vector<pair<ll,ll>>, greater<pair<ll,ll> > > pq;
	pq.push({0,1});
	dist[1] = 0;
	while(!pq.empty()){
		ll cur_node = pq.top().second;
		ll curd = pq.top().first;
		pq.pop();
		if(curd != dist[cur_node])
			continue;
		for(int i = 0; i < (int)adj[cur_node].size();++i){
			ll next_node = adj[cur_node][i].first.first;
			ll weight = adj[cur_node][i].first.second;
			ll have = adj[cur_node][i].second;
			if(dist[next_node] > dist[cur_node] + weight){
				dist[next_node] = dist[cur_node] + weight;
				used[next_node] = have;
				pq.push({dist[next_node],next_node});
			}
			else if(dist[next_node] == dist[cur_node] + weight){
				if(have == 0)
					used[next_node] = 0;
			}
		}
	}
}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n,m,k;
	cin >> n >> m >> k;
	for(int i = 0; i < m;++i){
		ll u,v,w;
		cin >> u >> v >> w;
		adj[u].push_back({{v,w},0});
		adj[v].push_back({{u,w},0});
	}
	for(int i = 0; i < k;++i){
		ll s,y;
		cin >> s >> y;
		adj[1].push_back({{s,y},1});
	}
	djk();
	int ans = k;
	for(int i = 1; i <= n;++i){
		ans -= used[i];
	}
	cout << ans << "\n";
}