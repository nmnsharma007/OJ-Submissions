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
		for(int i = 1; i < 2*k-n;++i){
			cout << i << " ";
		}
		for(int i = k; i >= 2*k-n;--i){
			cout << i << " ";
		}
		cout << "\n";
	}
}

