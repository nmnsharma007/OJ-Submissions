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
		int a,b;
		cin >> a >> b;
		string s;
		cin >> s;
		int n = s.length();
		int l = -1,r = -1;
		for(int i = 0; i < n;++i){
			if(s[i] == '1'){
				if(l == -1)
					l = i;
				r = i;
			}
		}
		int cnt = 0;
		for(int i = l;i <= r;++i){
			int j = i;
			if(s[i] == '0'){
				continue;
			}
			while(j < n && s[j] == '1'){
				++j;
			}
			i = j;
			++cnt;
		}
		vector<int> store;
		for(int i = l; i <= r;++i){
			if(s[i] == '1'){
				continue;
			}
			int total = 0;
			int j = i;
			while(j < n && s[j] == '0'){
				++total;
				++j;
			}
			store.push_back(total);
			i = j;
		}
		sort(store.begin(),store.end());
		for(int i = 1; i < (int)store.size();++i){
			store[i] += store[i-1];
		}
		int ans = cnt*a;
		for(int i = 0; i < (int)store.size();++i){
			ans = min(ans,(cnt-i-1)*a+store[i]*b);
		}
		cout << ans << "\n";
	}
}
