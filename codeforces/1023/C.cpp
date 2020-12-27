#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n,k;
	cin >> n >> k;
	string s;
	cin >> s;
	string ans = "";
	int open = k/2,close = 0;
	for(int i = 0; i < n;++i){
		if(s[i] == '(' && open){
			--open;
			++close;
			ans += '(';
		}
		else if(s[i] == ')' && close){
			--close;
			ans += ')';
		}
	}
	cout << ans << "\n";
}
