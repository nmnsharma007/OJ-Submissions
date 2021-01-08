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
		ll k;
		cin >> k;
		vector<ll> values;
		if(k%2LL == 1)
			cout << "-1\n";
		else{
			vector<ll> values;
			for(int i = 0; i <= 60;++i){
				values.push_back((1LL << (i+1)) - 2LL);
			}
			vector<int> ans;
			ans.push_back(1);
			k -= 2LL;
			int index = values.size()-1;
			while(k){
				if(values[index] > k){
					--index;
					continue;
				}
				for(int i = 0; i < index-1;++i){
					ans.push_back(0);
				}
				ans.push_back(1);
				k -= values[index];
			}
			cout << ans.size() << "\n";
			for(int i = 0; i < (int)ans.size();++i){
				cout << ans[i] << " ";
			}
			cout << "\n";
		}
	}
}
