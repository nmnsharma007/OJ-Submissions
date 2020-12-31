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
		int r = 0;
		int ans = 0;
		int pos = n;
		vector<int> len;
		for(int i = 0; i < n;++i){
			int j = i;
			int temp = 1;
			while(j+1 < n && s[j] == s[j+1]){
				++temp;
				++j;
			}
			i = j;
			len.push_back(temp);
		}
		int l = 0;
		for(int i = 0; i < n;++i){
			if(i > r)
				r = i;
			while(r+1 < n && s[r] != s[r+1]){
				++r;
			}
			if(r+1 < n && s[r] == s[r+1]){
				s[r] = '?';
				++r;
			}
			else if(r+1 >= n){
				pos = i;
				break;
			}
			++ans;
			i += len[l++] - 1;
		}
		int cnt = 0;
		for(int i = pos; i < n;++i){
			if(s[i] != '?')
				++cnt;
		}
		ans = ans + (cnt+1)/2;
		cout << ans << "\n";
	}
}
