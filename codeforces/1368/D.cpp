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
	for(int i = 0; i < n;++i){
		cin >> arr[i];
	}
	sort(arr,arr+n);
	vector<int> ans(n,0);
	for(int place = 0;place < 20;++place){
		int cnt = 0;
		for(int i = 0; i < n;++i){
			if(arr[i]&1)
				++cnt;
			arr[i] >>= 1;
		}
		for(int i = 0; i < n;++i){
			if(cnt > 0)
				ans[i] += 1 << place;
			else
				break;
			--cnt;
		}
	}
	ll res = 0;
	for(int i = 0; i < n;++i){
		res += 1LL * ans[i] * ans[i];
	}
	cout << res << "\n";
}
