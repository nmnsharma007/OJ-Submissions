#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	string s;
	cin >> s;
	s = s + s;
	int n = s.length();
	int ans = 0;
	for(int i = 0; i < n;++i){
		int j = i;
		int cnt = 1;
		while(j < n-1 && s[j] != s[j+1]){
			++cnt;
			++j;
		}
		ans = max(ans,cnt);
		i = j;
	}
	cout << min(ans,n/2) << "\n";
}
