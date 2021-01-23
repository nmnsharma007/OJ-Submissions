#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	int arr[n+1];
	for(int i = 1; i <= n;++i){
		cin >> arr[i];
	}
	int ans = 0;
	for(int i = 1; i <= n;++i){
		int r = i,l = i;
		while(l >= 1 && arr[l] >= arr[i]){
			--l;
		}
		while(r <= n && arr[r] >= arr[i]){
			++r;
		}
		--r,++l;
		ans = max(ans,(r-l+1)*arr[i]);
	}
	cout << ans << "\n";
}
