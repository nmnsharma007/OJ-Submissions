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
		int n,k;
		cin >> n >> k;
		string s;
		cin >> s;
		int flag = 1;
		int cnt0 = 0,cnt1 = 0;
		for(int i = 0; i < k;++i){
			if(s[i] != '?'){
				for(int j = i+k; j < n;j+=k){
					if(s[j] != '?'){
						if(s[j] != s[i]){
							flag = 0;
							break;
						}
					}
					else
						s[j] = s[i];
				}
			}
			else{
				char c = '?';
				for(int j = i+k; j < n;j+=k){
					if(s[j] != '?'){
						c = s[j];
						break;
					}
				}
				if(c != '?')
					s[i] = c;
			}
			if(flag == 0)
				break;
		}
		for(int i = 0; i < k;++i){
			if(s[i] == '0')
				++cnt0;
			else if(s[i] == '1')
				++cnt1;
		}
		if(cnt1+cnt0 == k && cnt1 != k/2)
			flag = 0;
		if(flag){
			for(int i = 0; i < k;++i){
				if(s[i] == '?'){
					if(cnt0 < k/2){
						s[i] = '0';
						++cnt0;
					}
					else if(cnt1 < k/2){
						s[i] = '1';
						++cnt1;
					}
				}
			}
			cnt1 = 0,cnt0 = 0;
			for(int i = 0; i < k;++i){
				if(s[i] == '1')
					++cnt1;
				else
					++cnt0;
			}
			if(cnt1 != k/2 || cnt0 != k/2)
				flag = 0;
			if(flag){
				for(int i = k; i < n;++i){
					if(s[i] == '?')
						continue;
					if(s[i] != s[i%k]){
						flag = 0;
						break;
					}
				}
			}
		}
		if(flag)
			cout << "YES\n";
		else
			cout << "NO\n";
	}
}
