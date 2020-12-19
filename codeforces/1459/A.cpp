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
		string r,b;
		cin >> r >> b;
		int cntr = 0,cntb = 0;
		string ans = "EQUAL";
		for(int i = 0; i < n;++i){
			if(r[i] > b[i])
				++cntr;
			if(b[i] > r[i])
				++cntb;
		}
		if(cntr > cntb)
			ans = "RED";
		else if(cntr < cntb)
			ans = "BLUE";
		cout << ans << "\n";
	}
}
