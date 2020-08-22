#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 51;
int dx[] = {0,0,1,-1};
int dy[] = {1,-1,0,0};
string grid[N];
bool reach[N][N];

bool bfs(int row,int col,int n,int m)
{
	bool visited[n][m];
	memset(visited,false,sizeof(visited));
	queue<pair<int,int>> q;
	q.push({row,col});
	visited[row][col] = true;
	while(!q.empty()){
		int crow = q.front().first;
		int ccol = q.front().second;
		q.pop();
		if(crow == n-1 && ccol == m-1)
			return true;
		for(int i = 0; i < 4;++i){
			int nrow = crow + dx[i];
			int ncol = ccol + dy[i];
			if(nrow < 0 || ncol < 0 || ncol >= m || nrow >= n)
				continue;
			if(visited[nrow][ncol])
				continue;
			if(grid[nrow][ncol] != '#'){
				q.push({nrow,ncol});
				visited[nrow][ncol] = true;
				if(grid[nrow][ncol] == 'G')
					reach[nrow][ncol] = true;
			}
		}
	}
	return false;
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--){
		int n,m;
		cin >> n >> m;
		for(int i = 0; i < n;++i){
			cin >> grid[i];
		}
		int flag = 1;
		for(int row = 0; row < n;++row){
			for(int col = 0; col < m;++col){
				if(grid[row][col] == 'B'){
					for(int k = 0; k < 4;++k){
						int nrow = row + dx[k];
						int ncol = col + dy[k];
						if(nrow < 0 || ncol < 0 || nrow >= n || ncol >= m)
							continue;
						if(grid[nrow][ncol] == 'G'){
							flag = 0;
							break;
						}
						if(grid[nrow][ncol] == '.')
							grid[nrow][ncol] = '#';
					}
				}
				if(flag == 0)
					break;
			}
			if(flag == 0)
				break;
		}
		if(flag == 0)
			cout << "No\n";
		else{
			memset(reach,false,sizeof(reach));
			for(int row = 0; row < n;++row){
				for(int col = 0;col < m;++col){
					if(grid[row][col] == 'G' && reach[row][col] == false){
						if(!bfs(row,col,n,m)){
							flag = 0;
							break;
						}
					}
				}
				if(flag == 0)
					break;
			}
			if(flag == 0)
				cout << "No\n";
			else
				cout << "Yes\n";
		}
	}
}
