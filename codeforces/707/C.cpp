#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	ll n;
	cin >> n;
	if(n <= 2)
		cout << "-1\n";
	else if(n%2 == 0){
		ll num1 = (n*n)/4LL - 1;
		ll num2 = (n*n)/4LL + 1;
		cout << num1 << " " << num2 << "\n";
	}
	else{
		ll num1 = (n*n+1)/2LL;
		ll num2 = (n*n-1)/2LL;
		cout << num1 << " " << num2 << "\n";
	}
}