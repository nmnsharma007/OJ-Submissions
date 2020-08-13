#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
//	cin >> t;
//	while(t--){
		int n,m,sx,sy;
		cin >> n >> m >> sx >> sy;
		bool visited[n+1][m+1];
		memset(visited,false,sizeof(visited));
		visited[sx][sy] = true;
		visited[1][sy] = true;
		visited[1][1] = true;
		vector<pair<int,int> > moves;
		moves.push_back({sx,sy});
		if(sx != 1){
			moves.push_back({1,sy});
		}
		if(sx != 1 && sy != 1){
			moves.push_back({1,1});
		}
		for(int i = 1; i <= n;++i){
			if(i%2){
				for(int j = 1; j  <= m;++j){
					if(!visited[i][j]){
						moves.push_back({i,j});
					}
				}
			}
			else{
				for(int j = m; j > 0; --j){
					if(!visited[i][j])
						moves.push_back({i,j});
				}
			}
		}
		for(auto x : moves)
			cout << x.first << " " << x.second << "\n";
//	}
}
