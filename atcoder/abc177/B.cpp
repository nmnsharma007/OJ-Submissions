#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	string s,t;
	cin >> s >> t;
	int ans = 1e9+7;
	for(int i = 0; i < (int)s.length()-t.length()+1;++i){
		int cnt = 0;
		for(int j = i; j < (int)t.length()+i;++j){
			if(t[j-i] != s[j])
				++cnt;
		}
			ans = min(ans,cnt);
	}
	cout << ans << "\n";
}
