#include<bits/stdc++.h>
using namespace std;
using ll = unsigned long long;
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
		int cnt1 = 0,cnt0 = 0;
		int cnt = 0;
		for(int i = 0; i < n;++i){
			if(s[i] == '0'){
				++cnt;
				continue;
			}
			if(cnt)
				cnt0 += cnt-1;
			cnt = 0;
		}
		if(cnt)
			cnt0 += cnt-1;
		cnt = 0;
		for(int i = 0; i < n;++i){
			if(s[i] == '1'){
				++cnt;
				continue;
			}
			if(cnt)
				cnt1 += cnt-1;
			cnt = 0;
		}
		if(cnt)
			cnt1 += cnt-1;
		cout << max(cnt1,cnt0) << "\n";
	}
}
