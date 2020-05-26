#include<bits/stdc++.h>
using namespace std;
vector<int> adj[2001];
bool visited[2001];
int level[2001];
void bfs(int root_node)
{
    visited[root_node] = true;
    queue<int> q;
    level[root_node] = 1;
    q.push(root_node);
    while(!q.empty())
    {
        int cur_node = q.front();
        q.pop();
        for(int i=0;i<adj[cur_node].size();i++)
        {
            int next_node = adj[cur_node][i];
            if(!visited[next_node])
            {
                visited[next_node] = true;
                q.push(next_node);
                level[next_node] = level[cur_node] + 1;
            }
        }
    }
}
int main()
{
    memset(level,1,sizeof(level));
    memset(visited,false,sizeof(visited));
    int n;
    cin >> n;
    int arr[n+1];
    for(int i=1;i<=n;i++)
        cin >> arr[i];
    for(int i=1;i<=n;i++)
    {
        if(arr[i] != -1)
            adj[arr[i]].push_back(i);
        else
            continue;
    }
    for(int i=1;i<=n;i++)
    {
        if(arr[i] == -1)
            bfs(i);
    }
    int ans = 0;
    for(int i=1;i<=n;i++)
        ans = max(ans,level[i]);
    cout << ans << "\n";
    //sort(level,level+2001);
    //cout << level[2000] << "\n";
}