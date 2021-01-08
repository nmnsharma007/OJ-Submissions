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
		string ans = "9";
		for(int i = 0; i < n-1;++i){
			ans += "8";
		}
		for(int i = 2; i < n;++i){
			int digit = (i-1+8)%10;
			ans[i] = char(digit + '0');
		}
		cout << ans << "\n";
	}
}
