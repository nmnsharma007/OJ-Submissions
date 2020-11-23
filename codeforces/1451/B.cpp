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
		int n,q;
		cin >> n >> q;
		string s;
		cin >> s;
		while(q--){
			int l,r;
			cin >> l >> r;
			--l,--r;
			vector<int> ans;
			for(int i = 0; i < n;++i){
				if(s[i] == s[l]){
					ans.push_back(i);
					++l;
					if(l > r)
						break;
				}
			}
			bool exist = false;
			for(int i = 0; i < (int)ans.size()-1;++i){
				if(ans[i+1]-ans[i] > 1){
					exist = true;
					break;
				}
			}
			if(!exist){
				for(int i = ans[ans.size()-1]+1; i < n;++i){
					if(s[r] == s[i]){
						exist = true;
						break;
					}
				}
			}
			if(exist)
				cout << "YES\n";
			else
				cout << "NO\n";
		}
	}
}
