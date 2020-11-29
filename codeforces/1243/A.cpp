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
		vector<int> a(n+1);
		for(int i = 1; i <= n;++i){
			cin >> a[i];
		}
		sort(a.begin()+1,a.end(),greater<int>());
		int left = 1;
		int ans = 1;
		for(int right = 1; right <= n;++right){
			if(a[right] < right-left+1){
				--right;
				++left;
				continue;
			}
			ans = max(ans,right-left+1);
		}
		cout << ans << "\n";
	}
}
