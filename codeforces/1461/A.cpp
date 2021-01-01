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
		int n,k;
		cin >> n >> k;
		string ans = "";
		for(int i = 0; i < n;++i){
			if(i%3 == 0)
				ans += "a";
			else if(i%3 == 1)
				ans += "b";
			else
				ans += "c";
		}
		cout << ans << "\n";
	}
}
