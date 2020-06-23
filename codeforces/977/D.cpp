#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
	int n;
	cin >> n;
	int visited[n];
	ll arr[n];
	for(int i=0;i<n;i++)
		cin >> arr[i];
	vector<ll> ans;
	for(int i=0;i<n;i++){
		memset(visited,0,sizeof(visited));
		ll prev = arr[i];
		ans.push_back(prev);
		visited[i] = 1;
		while(true){
			int flag = 0;
			for(int j=0;j<n;j++){
				if(!visited[j]){
					if((arr[j] == prev/3LL && prev % 3LL == 0) || arr[j] == 2LL*prev){
						ans.push_back(arr[j]);
						visited[j] = 1;
						prev = arr[j];
						flag = 1;
						break;
					}
				}
			}
			if(flag == 0){
				ans.clear();
				break;
			}
			if((int)ans.size() == n){
				break;
			}
		}
		if((int)ans.size() == n)
			break;
	}
	for(auto x : ans)
		cout << x  << " ";
}