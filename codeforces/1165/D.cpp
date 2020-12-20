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
		vector<ll> divisors(n);
		for(int i = 0; i < n;++i){
			cin >> divisors[i];
		}
		sort(divisors.begin(),divisors.end());
		ll res = divisors[0] * divisors[n-1];
		vector<ll> ans;
		for(ll i = 2; i*i <= res;++i){
			if(res%i == 0){
				ans.push_back(i);
				if(i != res/i)
					ans.push_back(res/i);
			}
		}
		sort(ans.begin(),ans.end());
		if(ans.size() == n){
			for(int i = 0; i < n;++i){
				if(divisors[i] != ans[i]){
					res = -1;
					break;
				}
			}
		}
		else
			res = -1;
		cout << res << "\n";
	}
}
