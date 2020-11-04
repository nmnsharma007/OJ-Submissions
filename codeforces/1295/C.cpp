#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int tc;
	cin >> tc;
	while(tc--){
		string s,t;
		cin >> s >> t;
		bool exist = true;
		vector<int> occur[26];
		for(int i = 0; i < (int)s.length();++i){
			occur[s[i]-'a'].push_back(i);
		}
		int ans = 0,start = -1;
		for(int i = 0; i < (int)t.length();++i){
			int letter = t[i]-'a';
			if(start == -1){
				if(occur[letter].size() == 0){
					exist = false;
					break;
				}
				start = occur[letter][0];
			}
			else{
				if(occur[letter].size() == 0){
					exist = false;
					break;
				}
				int index = upper_bound(occur[letter].begin(),occur[letter].end(),start) - occur[letter].begin();
				if(index >= (int)occur[letter].size()){
					++ans;
					start = -1;
					--i;
				}
				else
					start = occur[letter][index];
			}
		}
		if(start != -1)
			++ans;
		if(exist)
			cout << ans << "\n";
		else
			cout << "-1\n";
	}
}
