#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
using ll = long long;
int main()
{
	int q;
	cin >> q;
	while(q--){
		int n;
		cin >> n;
		int p[n+1];
		for(int i=1;i<=n;i++)
			cin >> p[i];
		vector<int> visited(n+1,0),ans(n+1,0);
		for(int i=1;i<=n;i++){
			int temp = i;
			int count = 1;
			if(!visited[i]){
				while(p[temp] != i){
					temp = p[temp];
					visited[temp] = i;
					count++;
				}
				ans[i] = count;
			}
			else
				ans[i] = ans[visited[i]];
		}
		for(int i=1;i<=n;i++){
			cout << ans[i] << " ";
		}
		cout << "\n";
	}
	return 0;
}