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
		int n,m;
		cin >> n >> m;
		string s[n];
		int left[n][m],right[n][m];
		memset(left,0,sizeof(left));
		memset(right,0,sizeof(right));
		for(int i = 0; i < n;++i){
			cin >> s[i];
			for(int j = 0; j < m;++j){
				if(s[i][j] == '*'){
					if(j > 0)
						left[i][j] = left[i][j-1] + 1;
					else
						left[i][j] = 1;
				}
			}
		}
		for(int i = 0; i < n;++i){
			for(int j = m-1; j >= 0;--j){
				if(s[i][j] == '*'){
					if(j == m-1)
						right[i][j] = 1;
					else
						right[i][j] = right[i][j+1] + 1;
				}
			}
		}
		int ans = 0;
		for(int i = 0; i < n;++i){
			for(int j = 0; j < m;++j){
				if(s[i][j] == '.')
					continue;
				int cnt = 1;
				++ans;
				for(int h = i+1; h < n;++h){
					if(s[h][j] == '.')
						break;
					if(j-cnt < 0)
						break;
					if(j+cnt >= m)
						break;
					if(left[h][j-1] < cnt)
						break;
					if(right[h][j+1] < cnt)
						break;
					++ans;
					++cnt;
				}
			}
		}
		cout << ans << "\n";
	}
}
