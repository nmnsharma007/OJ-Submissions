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
		string s;
		cin >> s;
		vector<int> pref(n+1,0),maxp(n+1,0),minp(n+1,0);
		for(int i = 0; i < n;++i){
			if(s[i] == '+')
				pref[i+1] = pref[i] + 1;
			else
				pref[i+1] = pref[i] - 1;
			maxp[i+1] = max(pref[i+1],maxp[i]);
			minp[i+1] = min(minp[i],pref[i+1]);
		}
		vector<int> maxs(n+2,0),mins(n+2,0);
		maxs[n+1] = pref[n],mins[n+1] = pref[n];
		for(int i = n; i >= 1;--i){
			maxs[i] = max(maxs[i+1],pref[i]);
			if(i == n)
				mins[i] = pref[i];
			else
				mins[i] = min(mins[i+1],pref[i]);
		}
		while(m--){
			int l,r;
			cin >> l >> r;
			int x = pref[l-1];
			int maxx = maxp[l-1],minx = minp[l-1];
			if(r < n){
				maxx = max(maxx,x+maxs[r+1]-pref[r]);
				minx = min(minx,x+mins[r+1]-pref[r]);
			}
			cout << maxx-minx+1 << "\n";
		}
	}
}
