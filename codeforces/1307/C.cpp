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
	ll ans = 0;
	for(char c = 'a';c <= 'z';++c){
		ll cnt = 0;
		for(int i = 0; i < n;++i){
			if(s[i] == c)
				++cnt;
		}
		ans = max(ans,cnt);
	}
	for(char c = 'a';c <= 'z';++c){
		for(char d = 'a';d <= 'z';++d){
			ll temp = 0;
			ll res = 0;
			for(int i = 0; i < n;++i){
				if(s[i] == d){
					res = res + temp;
				}
				if(s[i] == c){
					++temp;
				}
			}
			ans = max(res,ans);
		}
	}
	cout << ans << "\n";
}
