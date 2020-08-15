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
	vector<int> ans(n+1);
	pi[0] = 0;
	for(int i = 1;i < n;++i){
		int j = pi[i-1];
		while(j > 0 && s[i] != s[j]){
			j = pi[j-1];
		}
		if(s[i] == s[j])
			++j;
		pi[i] = j;
	}
	for(int i = 0; i < n;++i){
		++ans[pi[i]];
	}
	for(int i = n-1; i > 0;--i){
		ans[pi[i-1]] += ans[i];
	}
	for(int i = 0; i <= n;++i){
		++ans[i];
	}
	int j = pi[n-1];
	string res = "1";
	while(j > 0){
		if(ans[j] >= 3){
			res = "";
			for(int i = 0; i < j;++i){
				res += s[i];
			}
			break;
		}
		j = pi[j-1];
	}
	if(s[0] == s[n-1] && ans[1] >= 3 && res == "1")
		res = s[0];
	if(res == "1")
		res = "Just a legend";
	cout << res << "\n";
}
