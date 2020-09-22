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
		ll a,b;
		cin >> a >> b;
		if(a > b)
			swap(a,b);
		int ans = 0;
		for(int i = 0; i <= 1e5;++i){
			ll temp = i;
			temp = (temp*(temp+1LL))/2LL;
			ll fact = temp - b + a;
			if(fact >= 0 && fact %2 == 0){
				ans = i;
				break;
			}
		}
		cout << ans << "\n";
	}
}
