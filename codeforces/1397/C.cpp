#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	ll arr[n];
	for(int i = 0; i < n;++i){
		cin >> arr[i];
	}
	if(n == 1){
		cout << "1 1\n";
		cout << -arr[0] << "\n";
		cout << "1 1\n";
		cout << "0\n";
		cout << "1 1\n";
		cout << "0\n";
	}
	else{
		cout << "1 " << n << "\n";
		for(int i = 0; i < n;++i){
			cout << -arr[i] * n << " ";
		}
		cout << "\n1 " << n-1 << "\n";
		for(int i = 0; i < n-1;++i){
			cout << arr[i] * (n-1) << " ";
		}
		cout << "\n" << n << " " << n << "\n";
		cout << arr[n-1] * (n-1) << "\n";
	}
}	
