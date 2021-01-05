#include<bits/stdc++.h>
using namespace std;
using ll = long long;

bool comp(pair<pair<ll,ll>,int> &a,pair<pair<ll,ll>,int> &b){
	if(a.first.first != b.first.first)
		return a.first.first < b.first.first;
	return a.first.second < b.first.second;
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		vector<pair<pair<ll,ll>,int> > operations;
		for(int i = 0; i < n;++i){
			ll x,y;
			cin >> x >> y;
			if(x > y)
				swap(x,y);
			operations.push_back({{x,y},i+1});
		}
		sort(operations.begin(),operations.end(),comp);
		vector<int> ans(n,-1);
		int l = 0,cur_idx = 0,cur_weight = 1e9+7;
		for(int i = 0; i < n;++i){
			ll h = operations[i].first.first;
			ll w = operations[i].first.second;
			int j = operations[i].second;
			while(l < i && operations[l].first.first < h){
				if(operations[l].first.second < cur_weight){
					cur_idx = l;
					cur_weight = operations[l].first.second;
				}
				++l;
			}
			if(cur_weight < w){
				ans[j-1] = operations[cur_idx].second;
			}
		}
		for(int i = 0; i < n;++i){
			cout << ans[i] << " ";
		}
		cout << "\n";
	}
}
