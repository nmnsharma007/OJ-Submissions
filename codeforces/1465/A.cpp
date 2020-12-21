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
		int cnt = 0;
		for(int i = n-1; i >= 0;--i){
			if(s[i] != ')')
				break;
			++cnt;
		}
		if(cnt > n-cnt)
			cout << "Yes\n";
		else
			cout << "No\n";
	}
}
