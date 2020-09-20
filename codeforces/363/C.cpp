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
	string ans = "";
	for(int i = 0; i < n;++i){
		int cnt = 1;
		int j = i;
		while(j+1 < n && s[j] == s[j+1]){
			++cnt;
			++j;
		}
		if(cnt < 2)
			ans += s[i];
		else{
			int x = ans.length()-1;
			if(x-1 >= 0 && ans[x] == ans[x-1])
				ans += s[i];
			else{
				ans += s[i];
				ans += s[i];
			}
		}
		i = j;
	}
	cout << ans << "\n";
}
