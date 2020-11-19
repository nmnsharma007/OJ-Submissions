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
		int x,y;
		cin >> x >> y;
		int ans = 0;
		if(x == y)
			ans = 2*x;
		else
			ans = 2*max(x,y)-1;
		cout << ans << "\n";
	}
}
