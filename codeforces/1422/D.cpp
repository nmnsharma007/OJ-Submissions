#include<bits/stdc++.h>
using namespace std;
using ll = long long;
bool sortbysec(const pair<int,int> &p,const pair<int,int> &q){
	if(p.second != q.second)
		return p.second < q.second;
	return p.first < q.first;
}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n,m;
	cin >> n >> m;
	int sx,sy,fx,fy;
	map<pair<int,int>,int> coordinates;
	vector<ll> tim(m);
	vector<pair<int,ll>> adj[m];
	cin >> sx >> sy >> fx >> fy;
	vector<pair<int,int> > edges;
	int nodes = 0;
	for(int i = 0; i < m;++i){
		int x,y;
		cin >> x >> y;
		edges.push_back({x,y});
		coordinates[{x,y}] = nodes++;
	}
	sort(edges.begin(),edges.end());
	for(int i = 0; i < m-1;++i){
		int u = coordinates[{edges[i].first,edges[i].second}];
		int v = coordinates[{edges[i+1].first,edges[i+1].second}];
		ll w = edges[i+1].first-edges[i].first;
		adj[u].push_back({v,w});
		adj[v].push_back({u,w});
	}
	sort(edges.begin(),edges.end(),sortbysec);
	for(int i = 0; i < m-1;++i){
		int u = coordinates[{edges[i].first,edges[i].second}];
		int v = coordinates[{edges[i+1].first,edges[i+1].second}];
		ll w =	edges[i+1].second-edges[i].second;
		adj[u].push_back({v,w});
		adj[v].push_back({u,w});
	}
	priority_queue<pair<ll,int>,vector<pair<ll,int>>,greater<pair<ll,int>>> pq;
	for(int i = 0; i < m;++i){
		int x = edges[i].first;
		int y = edges[i].second;
		int node = coordinates[{x,y}];
		tim[node] = min(abs(x-sx),abs(y-sy));
		pq.push({tim[node],node});
	}
	while(!pq.empty()){
		int cur_node = pq.top().second;
		ll cur_time = pq.top().first;
		pq.pop();
		if(cur_time != tim[cur_node])
			continue;
		for(int i = 0; i < (int)adj[cur_node].size();++i){
			int next_node = adj[cur_node][i].first;
			ll w = adj[cur_node][i].second;
			if(tim[next_node] > tim[cur_node] + w){
				tim[next_node] = tim[cur_node] + w;
				pq.push({tim[next_node],next_node});
			}
		}
	}
	ll ans = abs(fx-sx) + abs(fy-sy);
	for(int i = 0; i < m;++i){
		int node = coordinates[{edges[i].first,edges[i].second}];
		int x = edges[i].first;
		int y = edges[i].second;
		ll dist = tim[node] + abs(x-fx) + abs(y-fy);
		ans = min(ans,dist);
	}
	cout << ans << "\n";
}
