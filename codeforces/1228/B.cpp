#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const ll MOD = 1e9+7;
int main()
{
	int h,w;
	cin >> h >> w;
	int grid[h+2][w+2];
	memset(grid,-1,sizeof(grid));
	for(int row = 1; row <= h;row++){
		int x;
		cin >> x;
		for(int col = 1; col <= x;col++){
			grid[row][col] = 1;
		}
		grid[row][x+1] = 0;
	}
	for(int col = 1; col <= w;col++){
		int x;
		cin >> x;
		for(int row = 1; row <= x;row++){
			if(grid[row][col] == 0){
				puts("0");
				return 0;
			}
			/*if(grid[row][col] == -1){
				if(col == 1){
					puts("0");
					return 0;
				}
			}*/
			grid[row][col] = 1;
		}
		if(grid[x+1][col] == 1){
			puts("0");
			return 0;
		}
		grid[x+1][col] = 0;
	}
	ll ans = 1;
	for(int i = 2; i <= h;i++){
		for(int j = 2; j <= w;j++){
			if(grid[i][j] == -1)
				ans = (ans * 2LL)%MOD;
		}
	}
	cout << ans << "\n";
}