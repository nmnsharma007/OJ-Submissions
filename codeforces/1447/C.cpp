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
		ll W;
		cin >> n >> W;
		vector<ll> weights(n);
		vector<int> ans;
		for(int i = 0; i < n;++i){
			cin >> weights[i];
			if(weights[i] >= (W+1)/2LL && weights[i] <= W && ans.size() == 0)
				ans.push_back(i+1);
		}
		if(ans.size() != 1){
			bool exist = false;
			ll sum = 0;
			for(int i = 0; i < n;++i){
				if(weights[i] < W){
					sum += weights[i];
					ans.push_back(i+1);
				}
				if(sum <= W && sum >= (W+1)/2LL){
					exist = true;
					break;
				}
			}
			if(sum <= W && sum >= (W+1)/2LL){
				cout << ans.size() << "\n";
				for(auto x : ans)
					cout << x << " ";
				cout << "\n";
			}
			else
				cout << "-1\n";
		}
		else{
			cout << "1\n";
			cout << ans[0] << "\n";
		}
	}
}
