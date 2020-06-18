#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
using ll = long long;
int main()
{
	int t;
	cin >> t;
	while(t--){
		ll a,b,n;
		cin >> a >> b >> n;
		ll count = 0;
		ll maxi = max(a,b);
		ll mini = min(a,b);
		b = mini;
		a = maxi;
		while(a <= n && b <= n){
			b+=a;
			swap(a,b);
			count++;
		}
		cout << count << "\n";
	}
	return 0;
}