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
		int ans = 0;
		for(int i = 1; i <= x;++i){
			if((i*(i+1))/2 >= x){
				ans = i;
				break;
			}
		}
		if((ans*(ans+1))/2 -x == 1)
			++ans;
		cout << ans << "\n";
	}
}
