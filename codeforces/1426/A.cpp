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
		int n,x;
		cin >> n >> x;
		int ans = 0;
		if(n <= 2)
			ans = 1;
		if(n > 2){
			n -= 2;
			ans += (n+x-1)/x + 1;
		}
		cout << ans << "\n";
	}
}
