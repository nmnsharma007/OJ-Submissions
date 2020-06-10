#include<bits/stdc++.h>
using namespace std;
const int N = 101;
vector<int> adj[N];
bool visited[N];
void dfs(int cur_node)
{
    for(int i=0;i<adj[cur_node].size();i++)
    {
        int next_node = adj[cur_node][i];
        if(!visited[next_node])
        {
            visited[next_node] = true;
            dfs(next_node);
        }
    }
}
int main()
{
    int n,m;
    cin >> n >> m;
    vector<int> v[n+1];
    int count = 0;
    for(int i=1;i<=n;i++)
    {
        int k;
        cin >> k;
        if(k == 0)
            count++;
        for(int j=0;j<k;j++)
        {
            int x;
            cin >> x;
            v[i].push_back(x);
        }
    }
    for(int i=1;i<=n;i++)
    {
        set<int> s;
        for(int j=0;j<v[i].size();j++)
            s.insert(v[i][j]);
        for(int j=1;j<=n;j++)
        {
            if(i == j)
                continue;
            int flag = 0;
            for(int k=0;k<v[j].size();k++)
            {
                if(s.find(v[j][k]) != s.end())
                {
                    flag = 1;
                    break;
                }
            }
            if(flag)
            {
                adj[i].push_back(j);
                adj[j].push_back(i);
            }
        }
    }
    int cost = 0;
    for(int i=1;i<=n;i++)
    {
        if(visited[i] == false)
        {
            visited[i] = true;
            cost++;
            dfs(i);
        }
    }
    if(count == n)
        cost = n+1;
    cout << cost-1 << "\n";
}