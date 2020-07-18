#include<bits/stdc++.h>
using namespace std;
const int N = 2 * 1e5 + 5;
vector<pair<int,pair<int,int> > > edges;
vector<int> adj[N];
bool visited[N];
int flag = 1;
bool rec_stack[N];
stack<int> top_sort;
void dfs(int cur_node)
{
	visited[cur_node] = true;
	rec_stack[cur_node] = true;
	for(auto next_node : adj[cur_node]){
		if(!visited[next_node]){
			dfs(next_node);
		}
		else if(rec_stack[next_node]){
			flag = 0;
			return;
		}
	}
	top_sort.push(cur_node);
	rec_stack[cur_node] = false;
}
int main()
{
	int t;
	cin >> t;
	while(t--){
		memset(visited,false,sizeof(visited));
		memset(rec_stack,false,sizeof(rec_stack));
		int n,m;
		cin >> n >> m;
		edges.clear();
		flag = 1;
		for(int i = 0; i <= N;i++){
			adj[i].clear();
		}
		while(!top_sort.empty()){
			top_sort.pop();
		}
		for(int i = 0; i < m;i++){
			int t,x,y;
			cin >> t >> x >> y;
			edges.push_back({t,{x,y}});
			if(t == 1)
				adj[x].push_back(y);
		}
		for(int i = 1; i <= n;i++){
			if(!visited[i]){
				dfs(i);
			}
		}
		if(flag == 0)
			puts("NO");
		else{
			cout << "YES\n";
			vector<int> pos(n+1,-1);
			int i = 1;
			while(!top_sort.empty()){
				int val = top_sort.top();
				top_sort.pop();
				pos[val] = i++; 
			}
			for(int i = 0; i < m;i++){
				int x = edges[i].second.first;
				int y = edges[i].second.second;
				if(edges[i].first == 0){
					int x = edges[i].second.first;
					int y = edges[i].second.second;
					if(pos[x] > pos[y])
						cout << y << " " << x << "\n";
				   	else
						cout << x << " " << y << "\n";	
				}
				else
					cout << x << " " << y << "\n";
			}
		}
	}
}