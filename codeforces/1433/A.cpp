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
		int x;
		cin >> x;
		int digit = x%10;
		int num = 0;
		while(x){
			x /= 10;
			++num;
		}
		int ans = (digit-1)*10;
		if(digit)
			ans += ((num+1)*num)/2;
		cout << ans << "\n";
	}
}
