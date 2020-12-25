#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	int ans = 0;
	for(int i = 0; i < n;++i){
		int k,a;
		cin >> k >> a;
		int power = k + ceil((double)log(a)/(double)log(4.0));
		if(power == k)
			++power;
		ans = max(ans,power);
	}
	cout << ans << "\n";
}
