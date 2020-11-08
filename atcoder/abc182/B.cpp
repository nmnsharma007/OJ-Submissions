#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	int arr[n];
	int val = 0;
	for(int i = 0; i < n;++i){
		cin >> arr[i];
		val = max(val,arr[i]);
	}
	int ans = 0;
	int res = -1;
	for(int i = 2; i <= val;++i){
		int cnt = 0;
		for(int j = 0; j < n;++j){
			if(arr[j]%i == 0)
				++cnt;
		}
		if(cnt > ans){
			ans = max(ans,cnt);
			res = i;
		}
	}
	cout << res << "\n";
}
