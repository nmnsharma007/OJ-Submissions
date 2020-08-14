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
		vector<int> v;
		int cnt = 0;
		for(int i = 0; i < (int)s.length();++i){
			if(s[i] == '1'){
				++cnt;
				continue;	
			}
			v.push_back(cnt);
			cnt = 0;
		}
		if(cnt)
			v.push_back(cnt);
		sort(v.begin(),v.end(),greater<int>());
		int ans = 0;
		for(int i = 0; i < (int)v.size();i+=2){
			ans += v[i];
		}
		cout << ans << "\n";
	}
}
