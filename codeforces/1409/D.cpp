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
		ll n;
		int s;
		cin >> n >> s;
		ll temp = n;
		int sum = 0;
		while(temp){
			sum += temp%10;
			temp /= 10;
		}
		if(sum <= s)
			cout << "0\n";
		else{
			ll num = 1;
			temp = n;
			while(true){
				num *= 10;
				ll rem = temp%num;
				temp += num - rem;
				sum = 0;
				ll tmp = temp;
				int res = 0;
				while(tmp){
					res += tmp%10;
					tmp /= 10;
				}
				if(res <= s){
					break;
				}
			}
			cout << temp - n << "\n";
		}
	}
}
