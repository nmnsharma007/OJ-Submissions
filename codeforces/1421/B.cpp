#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		string grid[n];
		for(int i = 0; i < n;++i){
			cin >> grid[i];
		}
		vector<pair<int,int>> ans;
		if(grid[0][1] == '1' && grid[1][0] == '1'){
			if(grid[n-1][n-2] == '1')
				ans.push_back({n,n-1});
			if(grid[n-2][n-1] == '1')
				ans.push_back({n-1,n});
		}
		else if(grid[0][1] == '0' && grid[1][0] == '0'){
			if(grid[n-1][n-2] == '0')
				ans.push_back({n,n-1});
			if(grid[n-2][n-1] == '0')
				ans.push_back({n-1,n});
		}
		else{
			if(grid[n-1][n-2] == '0' && grid[n-2][n-1] == '0'){
				if(grid[0][1] == '0')
					ans.push_back({1,2});
				else
					ans.push_back({2,1});
			}
			else if(grid[n-1][n-2] == '1' && grid[n-2][n-1] == '1'){
				if(grid[0][1] == '1')
					ans.push_back({1,2});
				else
					ans.push_back({2,1});
			}
			else{
				if(grid[0][1] == '0')
					ans.push_back({1,2});
				else
					ans.push_back({2,1});
				if(grid[n-2][n-1] == '1')
					ans.push_back({n-1,n});
				else
					ans.push_back({n,n-1});
			}
		}
		cout << ans.size() << "\n";
		for(auto x : ans)
			cout << x.first << " " << x.second << "\n";
	}
}
