#include<bits/stdc++.h>
using namespace std;
int no_of_consecutive_cats[1000001];
bool visited[1000001];
vector<int> adj[1000001];
int cat[1000001];
int ans = 0;
int m;
void dfs(int cur_node)
{
	visited[cur_node] = true;
	int flag = 0;
	if(no_of_consecutive_cats[cur_node] > m)
		return;
	for(int i = 0; i < adj[cur_node].size();i++)
	{
		int next_node = adj[cur_node][i];
		if(visited[next_node] == false)
		{
		    flag = 1;
			if(cat[next_node])
			{
				no_of_consecutive_cats[next_node] = no_of_consecutive_cats[cur_node] + 1;
			}
			else
				no_of_consecutive_cats[next_node] = 0;
				if(no_of_consecutive_cats[next_node] <= m)
					dfs(next_node);
		}
	}
	if(!flag)
	    ans++;
}
int main()
{
	memset(visited,false,sizeof(visited));
	memset(cat,0,sizeof(cat));
	memset(no_of_consecutive_cats,0,sizeof(no_of_consecutive_cats));
	int n;
	cin >> n >> m;
	for(int i = 1;i <= n;i++)
	{
		cin >> cat[i];
	}
	for(int i = 1;i <= n-1;i++)
	{
		int x,y;
		cin >> x >> y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	no_of_consecutive_cats[1] = cat[1];
	dfs(1);
	cout << ans;
}