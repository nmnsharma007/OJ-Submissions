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
		int a,b,k;
		cin >> a >> b >> k;
		map<int,int> boys,girls;
		vector<pair<int,int>> couple;
		for(int i = 0; i < k;++i){
			int a;
			cin >> a;
			++boys[a];
			couple.push_back({a,0});
		}
		for(int i = 0; i < k;++i){
			int b;
			cin >> b;
			++girls[b];
			couple[i] = {couple[i].first,b};
		}
		ll ans = 0;
		for(int i = 0; i < k;++i){
			int a = couple[i].first;
			int b = couple[i].second;
			ll numa = boys[a];
			ll numb = girls[b];
			ll num = k - numa;
			num = num - (numb-1);
			ans += num;
		}
		ans /= 2LL;
		cout << ans << "\n";
	}
}
