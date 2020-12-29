#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int y,b,r;
	cin >> y >> b >> r;
	int ans = 0;
	for(int i = 1; i <= y;++i){
		if(b >= i+1 && r >= i+2)
			ans = max(ans,3*i+3);
		else
			break;
	}
	cout << ans << "\n";
}
