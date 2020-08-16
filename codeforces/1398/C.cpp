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
		string s;
		cin >> s;
		map<int,int> mp;
		int cur_sum = 0;
		ll ans = 0;
		for(int i = 0; i < n;++i){
			cur_sum += (s[i]-'0') - 1;
			if(cur_sum == 0)
				++ans;
			if(mp.find(cur_sum) != mp.end())
				ans += (ll)mp[cur_sum];
			++mp[cur_sum];
		}
		cout << ans << "\n";
	}
}
