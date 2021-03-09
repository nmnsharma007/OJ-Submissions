#include<iostream>
#include<cmath>
#include<vector>
#include<string>
using ll = long long;
int main()
{
	std::ios_base::sync_with_stdio(0);
	std::cin.tie(0);
	int n,m;
	std::cin >> n >> m;
	std::string grid[n];
	for(int i = 0; i < n;++i){
		std::cin >> grid[i];
	}
	int ans = 0;
	for(int col = 0;col < m;++col){
		for(int row = 1;row < n;++row){
			if(grid[row][col] >= grid[row-1][col])
				continue;
			bool exist = false;
			for(int i = col-1;i >= 0;--i){
				if(grid[row][i] > grid[row-1][i]){
					exist = true;
					break;
				}
			}
			if(!exist){
				++ans;
				for(int i = 0; i < n;++i){
					grid[i][col] = '-';
				}
			}
		}
	}
	std::cout << ans << "\n";
}

