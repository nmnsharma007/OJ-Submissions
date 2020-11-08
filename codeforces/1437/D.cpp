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
		int cur = 1;
		int nxt = 0;
		int ans = 1;
		for(int i = 1; i < n-1;++i){
			++nxt;
			if(arr[i] < arr[i+1]){
				continue;
			}
			--cur;
			if(cur == 0){
				++ans;
				cur = nxt;
				nxt = 0;
			}
		}
		cout << ans << "\n";
	}
}
