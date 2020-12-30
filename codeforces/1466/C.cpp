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
		string s;
		cin >> s;
		int n = s.length();
		int ans = 0;
		for(int i = 1; i < n;++i){
			if(s[i] == s[i-1]){
				for(char c = 'a';c <= 'z';++c){
					if(s[i] == c)
						continue;
					if(i+1 < n && s[i+1] == c)
						continue;
					if(i+2 < n && s[i+2] == c)
						continue;
					if(i >= 2 && s[i-2] == c)
						continue;
					s[i] = c;
					++ans;
					break;
				}
			}
			else if(i >= 2 && s[i] == s[i-2]){
				for(char c = 'a';c <= 'z';++c){
					if(s[i] == c)
						continue;
					if(i+1 < n && s[i+1] == c)
						continue;
					if(i+2 < n && s[i+2] == c)
						continue;
					if(s[i-1] == c)
						continue;
					s[i] = c;
					++ans;
					break;
				}
			}
		}
		cout << ans << "\n";
	}
}
