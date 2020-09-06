#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 50+5;
bool visited[N][N];
bool rec[N][N];
string grid[N];
int flag = 0;
int dx[] = {0,0,1,-1};
int dy[] = {1,-1,0,0};
int n,m;

void dfs(int row,int col,int prow,int pcol,char c)
{
    visited[row][col] = true;
    rec[row][col] = true;
    for(int i = 0; i < 4;++i){
        int nrow = row + dx[i];
        int ncol = col + dy[i];
        if(nrow >= n || ncol >= m || nrow < 0 || ncol < 0)
			continue;
		if(grid[nrow][ncol] != c)
			continue;
		if(nrow == prow && ncol == pcol)
			continue;
		if(!visited[nrow][ncol])
			dfs(nrow,ncol,row,col,c);
		else if(rec[nrow][ncol]){
			flag = 1;
			return;
		}
    }
	rec[row][col] = false;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    memset(visited,false,sizeof(visited));
    memset(rec,false,sizeof(rec));
    cin >> n >> m;
    for(int i = 0; i < n;++i){
        cin >> grid[i];
    }
    for(int i = 0; i < n;++i){
        for(int j = 0; j < m;++j){
            if(visited[i][j])
                continue;
            dfs(i,j,-1,-1,grid[i][j]);
        }
    }
	if(flag == 1)
		cout << "Yes\n";
	else
		cout << "No\n";
}
