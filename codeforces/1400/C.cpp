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
		int x;
		cin >> x;
		string ans = "";
		int n = s.length();
		for(int i = 0; i < n;++i){
			ans += '1';
		}
		int flag = 1;
		for(int i = 0; i < n;++i){
			if(i+x < n && s[i+x] == '0')
				ans[i] = '0';
			if(i-x >= 0 && s[i-x] == '0')
				ans[i] = '0';
		}
		for(int i = 0; i < n;++i){
			if(s[i] == '1'){
				if(i+x < n && ans[i+x] == '1')
					continue;
				else if(i-x >= 0 && ans[i-x] == '1')
					continue;
				else{
					flag = 0;
					break;
				}
			}
		}
		if(flag)
			cout << ans << "\n";
		else
			cout << "-1\n";
	}
}