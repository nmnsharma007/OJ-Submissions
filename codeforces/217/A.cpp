#include<bits/stdc++.h>
using namespace std;
bool visited[1001][1001];
vector<pair<int,int> > v;
int n;
void dfs(int cur_x,int cur_y)
{
    visited[cur_x][cur_y] = true;
    pair<int,int> cur_pair = make_pair(cur_x,cur_y);
    for(int i=0;i<n;i++)
    {
        int next_x = v[i].first;
        int next_y = v[i].second;
        pair<int,int> next_point = make_pair(next_x,next_y);
        if(visited[next_x][next_y] == false && (next_x == cur_x || next_y == cur_y))
        {
            dfs(next_x,next_y);
        }
    }
    return;
}
int main()
{
    for(int i=1;i<=1000;i++)
    {
        for(int j=1;j<=1000;j++)
            visited[i][j] = false;
    }
    cin >> n;
    for(int i=0;i<n;i++)
    {
        int x,y;
        cin >> x >> y;
        v.push_back(make_pair(x,y));
    }
    int ans = 0;
    for(int i=0;i<n;i++)
    {
        int x = v[i].first;
        int y = v[i].second;
        if(visited[x][y] == false)
        {
            dfs(x,y);
            ans++;
        }
    }
    cout << ans-1;
}
