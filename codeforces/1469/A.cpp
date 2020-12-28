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
		int posl = 0,posr = 0;
		int cnt = 0;
		for(int i = 0; i < n;++i){
			if(s[i] == '(')
				posl = i;
			if(s[i] == ')')
				posr = i;
			if(s[i] == '?')
				++cnt;
		}
		if(cnt%2 == 0){
			if(posl > posr){
				if(posl < n-1 && posr > 0)
					cout << "YES\n";
				else
					cout << "NO\n";
			}
			else
				cout << "YES\n";
		}
		else
			cout << "NO\n";
	}
}
