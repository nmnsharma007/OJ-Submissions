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
		string s[n];
		for(int i = 0; i < n;++i){
			cin >> s[i];
		}
		vector<int> freq(26,0);
		for(int i = 0; i < n;++i){
			for(int j = 0; j < (int)s[i].length();++j){
				++freq[s[i][j]-'a'];
			}
		}
		int flag = 1;
		for(int i = 0; i < 26;++i){
			if(freq[i]%n){
				flag = 0;
				break;
			}
		}
		if(flag)
			cout << "YES\n";
		else
			cout << "NO\n";
	}
}
