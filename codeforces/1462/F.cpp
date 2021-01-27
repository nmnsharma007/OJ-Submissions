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
		int left[n],right[n];
		vector<pair<int,int> > v;
		for(int i = 0; i < n;++i){
			int l,r;
			cin >> l >> r;
			v.push_back({l,r});
			left[i] = l;
			right[i] = r;
		}
		sort(left,left+n);
		sort(right,right+n);
		int ans = 1e8;
		for(int i = 0; i < n;++i){
			int r = upper_bound(left,left+n,v[i].second) - left;
			int l = lower_bound(right,right+n,v[i].first) - right;
			--l;
			ans = min(ans,n-r+l+1);
		}
		cout << ans << "\n";
	}
}

