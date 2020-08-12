#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	string s;
	cin >> s;
	int n = s.length();
	vector<int> pi(n);
	pi[0] = 0;
	for(int i = 1; i < n;++i){
		int j = pi[i-1];
		while(j > 0 && s[i] != s[j]){
			j = pi[j-1];
		}
		if(s[i] == s[j])
			++j;
		pi[i] = j;
	}
	vector<int> ans(n+1);
	for(int i = 0; i < n;++i){
		++ans[pi[i]];
	}
	for(int i = n-1; i > 0;--i){
		ans[pi[i-1]] += ans[i];
	}
	for(int i = 1; i <= n;++i){
		++ans[i];
	}
	int j = pi[n-1];
	vector<bool> take(n,false);
	while(j > 0){
		take[j-1] = true;
		j = pi[j-1];
	}
	if(s[0] == s[n-1])
		take[0] = true;
	vector<pair<int,int> > res;
	for(int i = 1; i <= n;++i){
		if(take[i-1]){
			res.push_back({i,ans[i]});
		}
	}
	if(n != 1)
		res.push_back({n,1});
	cout << res.size() << "\n";
	for(auto x : res)
		cout << x.first << " " << x.second << "\n";
	cout << "\n";
}
