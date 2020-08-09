#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n,s,t;
	cin >> n >> s >> t;
	int pos[n+1];
	for(int i = 1; i <= n;++i){
		cin >> pos[i];
	}
	int ans = 0;
	int npos = s;
	while(npos != t){
		++ans;
		npos = pos[npos];
		if(npos == s){
			break;
		}
	}
	if(npos != t)
		ans = -1;
	cout << ans << "\n";
}
