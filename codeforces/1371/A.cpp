#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = 1e9+7;
int main()
{
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		if(n == 1)
			cout << "1\n";
		else if(n%2 == 0){
			cout << n/2 << "\n";
		}
		else
			cout << (n+1)/2 << "\n";
	}
	return 0;
}
