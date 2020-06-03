#include<bits/stdc++.h>
using namespace std;
bool visited[500][500];
int n,m,k,free_cells;
string s[501];
void dfs(int x,int y)
{
    if(x >= n || x < 0)
        return;
    if(y >= m || y < 0)
        return;
    if(s[x][y] == '#')
        return;
    if(visited[x][y])
        return;
    if(k <= 0)
        return;
   // s[x][y] = 'X';
    visited[x][y] = true;
    k--;
    if(k)
    {
        dfs(x-1,y);
        dfs(x,y-1);
        dfs(x,y+1);
        dfs(x+1,y);
    }
    return;
}
int main()
{
    memset(visited,false,sizeof(visited));
    cin >> n >> m >> k;
    for(int i=0;i<n;i++)
        cin >> s[i];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(s[i][j] == '.')
                free_cells++;
        }
    }
    k = free_cells - k;
    for(int i=0;i<n;i++)
    {
        int flag = 0;
        for(int j=0;j<m;j++)
        {
            if(s[i][j] == '.')
            {
               // k--;
                dfs(i,j);
                flag = 1;
                break;
            }
        }
        if(flag)
            break;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(!visited[i][j] && s[i][j] == '.')
                s[i][j] = 'X';
        }
    }
    for(int i=0;i<n;i++)
        cout << s[i] << "\n";
}