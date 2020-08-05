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
		if(n == 1)
			cout << "0\n";
		else{
			sort(arr,arr+n);
			int maxw = arr[n-1] + arr[n-2];
			int ans = 0;
			for(int w = 2; w <= maxw;++w){
				vector<bool> visited(n,false);
				int count = 0;
				for(int i = 0; i < n;++i){
					if(visited[i])
						continue;
					for(int j = 0; j < n;++j){
						if(visited[j])
							continue;
						if(i == j)
							continue;
						if(arr[i]+arr[j] == w){
							++count;
							visited[j] = true;
							visited[i] = true;
							break;
						}
					}
				}
				ans = max(ans,count);
			}
			cout << ans << "\n";
		}
	}
}