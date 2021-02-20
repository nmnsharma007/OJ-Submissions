#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e5+5;
const ll INF = 1e16;
vector<pair<int,pair<ll,ll>>> adj[N];
vector<ll> dist(N,INF);

void djk(int src){
	dist[src] = 0;
	priority_queue<pair<ll,int>,vector<pair<ll,int>>,greater<pair<ll,int>>> pq;
	pq.push({0,src});
	while(!pq.empty()){
		ll t = pq.top().first;
		int cur_node = pq.top().second;
		pq.pop();
		if(dist[cur_node] != t)
			continue;
		for(int i = 0; i < (int)adj[cur_node].size();++i){
			int next_node = adj[cur_node][i].first;
			ll next_t = adj[cur_node][i].second.first;
			ll k = adj[cur_node][i].second.second;
			ll leave_time = ((t+k-1)/k) * k;
			ll new_t = leave_time + next_t;
			if(dist[next_node] > new_t){
				dist[next_node] = new_t;
				pq.push({dist[next_node],next_node});
			}
		}
	}
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n,m,x,y;
	cin >> n >> m >> x >> y;
	for(int i = 0 ; i < m;++i){
		int a,b;
		ll t,k;
		cin >> a >> b >> t >> k;
		adj[a].push_back({b,{t,k}});
		adj[b].push_back({a,{t,k}});
	}
	djk(x);
	if(dist[y] == INF)
		dist[y] = -1;
	cout << dist[y] << "\n";
}
