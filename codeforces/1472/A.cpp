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
		int w,h,n;
		cin >> w >> h >> n;
		int powa = 0,powb = 0;
		while(w%2 == 0){
			++powa;
			w /= 2;
		}
		while(h%2 == 0){
			++powb;
			h /= 2;
		}
		int tempa = 1;
		for(int i = 1; i <= powa;++i){
			tempa *= 2;
		}
		int tempb = 1;
		for(int i = 1; i <= powb;++i){
			tempb *= 2; 
		}
		int ans = tempa*tempb;
		if(ans >= n)
			cout << "YES\n";
		else
			cout << "NO\n";
	}
}
