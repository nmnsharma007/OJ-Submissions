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
		int arr[n];
		for(int i = 0; i < n;++i){
			cin >> arr[i];
		}
		int type = arr[0];
		int flag = 0;
		for(int i = 0; i < n;++i){
			if(arr[i] != type){
				flag = 1;
				break;
			}
		}
		if(flag == 0)
			cout << "NO\n";
		else{
			cout << "YES\n";
			vector<pair<int,int>> ans;
			queue<int> q;
			q.push(0);
			vector<bool> visited(n,false);
			visited[0] = true;
			while(!q.empty()){
				int cur_node = q.front();
				q.pop();
				for(int i = 0; i < n;++i){
					if(visited[i])
						continue;
					if(arr[i] != arr[cur_node]){
						visited[i] = true;
						q.push(i);
						ans.push_back({cur_node+1,i+1});
					}
				}
			}
			for(auto x : ans)
				cout << x.first << " " << x.second << "\n";
		}
	}
}
