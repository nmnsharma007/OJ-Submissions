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
		int n,p,k;
		cin >> n >> p >> k;
		string s;
		cin >> s;
		int x,y;
		cin >> x >> y;
		vector<int> suf(n);
		for(int i = n-1; i >= 0;--i){
			if(s[i] == '1'){
				if(i+k >= n)
					suf[i] = 0;
				else
					suf[i] = suf[i+k];
			}
			else{
				if(i+k >= n)
					suf[i] = 1;
				else
					suf[i] = 1 + suf[i+k];
			}
		}
		int ans = suf[p-1]*x;
		for(int i = 1; i < n;++i){
			if(i+p-1 <= n-1){
				int cost = i*y + suf[i+p-1]*x;
				ans = min(ans,cost);
			}
		}
		cout << ans << "\n";
	}
}
