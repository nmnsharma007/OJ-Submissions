#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	int arr[n+1],nxt[n+1],pos[n+1];
	for(int i = 1; i <= n;++i){
		cin >> arr[i];
		nxt[i] = n+1;
		pos[i] = n+1;
	}
	for(int i = n; i >= 1;--i){
		nxt[i] = pos[arr[i]];
		pos[arr[i]] = i;
	}
	int ans = 0;
	arr[0] = -1;
	nxt[0] = n+1;
	int x = 0,y = 0;
	for(int z = 1; z <= n;++z){
		if(arr[x] == arr[z]){
			x = z;
		}
		else if(arr[y] == arr[z]){
			y = z;
		}
		else if(nxt[x] < nxt[y]){
			++ans;
			y = z;
		}
		else if(nxt[x] >= nxt[y]){
			++ans;
			x = z;
		}
	}
	cout << ans << "\n";
}
