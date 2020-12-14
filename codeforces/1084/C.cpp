#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = 1e9+7;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	string s;
	cin >> s;
	int n = s.length();
	ll ans = 1;
	for(int i = 0; i < n;++i){
		int j = i;
		ll cnt = 0;
		while(j < n && s[j] != 'b'){
			if(s[j] == 'a')
				++cnt;
			++j;
		}
		ans = (ans * (cnt+1))%MOD;
		i = j;
	}
	cout << ans-1 << "\n";
}
