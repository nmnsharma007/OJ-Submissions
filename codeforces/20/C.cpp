#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e5+5;
const ll INF = 1e18;
vector<pair<int,int> > adj[N];
vector<ll> dist(N,INF);
bool visited[N];
int pred[N];
int main()
{
	int n,m;
	scanf("%d%d",&n,&m);
	for(int i = 0; i < m;i++){
		int a,b,w;
		scanf("%d%d%d",&a,&b,&w);
		adj[a].push_back({b,w});
		adj[b].push_back({a,w});
	}	
	for(int i = 1; i < N;i++){
		visited[i] = false;
	}
	memset(visited,false,sizeof(visited));
	memset(pred,-1,sizeof(pred));
	priority_queue<pair<int,int>,vector<pair<int,int> >, greater<pair<int,int> > > pq;
	pq.push({0,1});
	dist[1] = 0;
	while(!pq.empty()){
		pair<int,int> cur = pq.top();
		int cur_node = cur.second;
		int cur_dist = cur.first;
		pq.pop();
		if(cur_dist > dist[cur_node])
			continue;
		//visited[cur_node] = true;
		for(int i = 0; i < (int)adj[cur_node].size();i++){
			int next_node = adj[cur_node][i].first;
			int weight = adj[cur_node][i].second;
			if(next_node == cur_node)
				continue;
			if(dist[next_node] > dist[cur_node] + weight){
				dist[next_node] = dist[cur_node] + weight;
				pq.push({dist[next_node],next_node});
				pred[next_node] = cur_node;
			}
		}
	}
	if(pred[n] == -1)
		puts("-1");
	else{
		vector<int> path;
		for(int vertex = n;vertex != 1;vertex = pred[vertex]){
			path.push_back(vertex);
		}
		path.push_back(1);
		for(int i = path.size()-1;i >= 0;i--){
			printf("%d ",path[i]);
		}
		printf("\n");
	}
}