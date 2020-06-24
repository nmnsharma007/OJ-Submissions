#include<bits/stdc++.h>
using namespace std;
const int INF = INT_MAX;
int main()
{
	int n,m,k;
	cin >> n >> m >> k;
	vector<pair<pair<int,int>,int> > v;
	for(int i=0;i<m;i++){
		int x,y,l;
		cin >> x >> y >> l;
		v.push_back({{x,y},l});
	}
	set<int> s;
	for(int i=0;i<k;i++){
		int x;
		cin >> x; 
		s.insert(x);
	}
	int ans = INF;
	for(int i=0;i<m;i++){
		int x = v[i].first.first;
		int y = v[i].first.second;
		int distance = v[i].second;
		if((s.find(x) == s.end() && s.find(y) != s.end()) || (s.find(x)!=s.end() && s.find(y) == s.end())){
			ans = min(ans,distance);
		}
	}
	if(ans == INT_MAX)
		ans = -1;
	cout << ans << "\n";
}