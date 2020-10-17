#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	ll n;
	cin >> n;
	vector<ll> ans;
	for(ll i = 1; i*i <= n;++i){
		if(n%i == 0){
			ans.push_back(i);
			if(i != n/i)
				ans.push_back(n/i);
		}
	}
	sort(ans.begin(),ans.end());
	for(auto x : ans)
		cout << x << "\n";
}
