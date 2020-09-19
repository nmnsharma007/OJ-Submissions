#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	int grid[n][2];
	for(int i = 0; i < n;++i){
		cin >> grid[i][0] >> grid[i][1];
	}
	for(int i = 0; i < n-2;++i){
		if(grid[i][0] == grid[i][1] && grid[i+1][0] == grid[i+1][1] && grid[i+2][0] == grid[i+2][1]){
			cout << "Yes\n";
			return 0;
		}
	}
	cout << "No\n";
}
