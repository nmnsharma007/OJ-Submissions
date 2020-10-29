#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e3+5;
const int INF = 1e9+7;
vector<pair<int,int>> adj[N];
int dist_a[N],dist_b[N];
map<pair<int,int>,int> edges;

void djk_a(int src,int n)
{
	for(int i = 1; i <= n;++i){
		dist_a[i] = INF;
	}
	dist_a[src] = 0;
	priority_queue<pair<int,int>,vector<pair<int,int> >,greater<pair<int,int>> > pq;
	pq.push({0,src});
	while(!pq.empty()){
		int cur_node = pq.top().second;
		int cur_weight = pq.top().first;
		pq.pop();
		if(dist_a[cur_node] != cur_weight)
			continue;
		for(int i = 0; i < (int)adj[cur_node].size();++i){
			int next_node = adj[cur_node][i].first;
			int w = adj[cur_node][i].second;
			if(dist_a[next_node] > dist_a[cur_node] + w){
				dist_a[next_node] = dist_a[cur_node] + w;
				pq.push({dist_a[next_node],next_node});
			}
		}
	}
}

void djk_b(int src,int n)
{
	for(int i = 1; i <= n;++i){
		dist_b[i] = INF;
	}
	dist_b[src] = 0;
	priority_queue<pair<int,int>,vector<pair<int,int> >,greater<pair<int,int>> > pq;
	pq.push({0,src});
	while(!pq.empty()){
		int cur_node = pq.top().second;
		int cur_weight = pq.top().first;
		pq.pop();
		if(dist_b[cur_node] != cur_weight)
			continue;
		for(int i = 0; i < (int)adj[cur_node].size();++i){
			int next_node = adj[cur_node][i].first;
			int w = adj[cur_node][i].second;
			if(dist_b[next_node] > dist_b[cur_node] + w){
				dist_b[next_node] = dist_b[cur_node] + w;
				pq.push({dist_b[next_node],next_node});
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
	vector<pair<int,int> > edges;
	for(int i = 0; i < m;++i){
		int x,y,w;
		cin >> x >> y >> w;
		edges.push_back({x,y});
		adj[x].push_back({y,w});
		adj[y].push_back({x,w});
	}
	int ans = 1e9+7;
	vector<int> store(m,0);
	for(int i = 0; i < k;++i){
		int a,b;
		cin >> a >> b;
		djk_a(a,n);
		djk_b(b,n);
		for(int edge = 0;edge < m;++edge){
			int x = edges[edge].first;
			int y = edges[edge].second;
			store[edge] = store[edge] + min(dist_a[b],min(dist_a[x]+dist_b[y],dist_a[y]+dist_b[x]));
		}
	}
	for(int i = 0; i < m;++i){
		ans = min(ans,store[i]);
	}
	cout << ans << "\n";
}

