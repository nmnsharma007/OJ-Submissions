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
		int start = -1,end = -1;
		for(int i = 0; i < n;++i){
			cin >> arr[i];
			if(arr[i] == 1){
				if(start == -1)
					start = i;
				end = i;
			}
		}
		int ans = 0;
		for(int i = start; i <= end;++i){
			if(arr[i] == 0)
				++ans;
		}
		cout << ans << "\n";
	}
}
