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
		int ans = 0;
		char c = '-';
		for(int i = 0; i < n;++i){
			if(c != s[i]){
				c = s[i];
				break;
			}
		}
		for(int i = 0; i < n;++i){
			if(s[i] == '-' || s[i] == c)
				continue;
			ans = -1;
			break;
		}
		if(ans != -1)
			cout << n << "\n";
		else{
			ans = 0;
			for(int i = 0; i < n;++i){
				if(s[(i-1+n)%n] == '-')
					++ans;
				else if(s[i] == '-')
					++ans;
			}
			cout << ans << "\n";
		}
	}
}
