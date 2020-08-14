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
		int n;
		cin >> n;
		ll arr[n];
		for(int i = 0; i < n;++i){
			cin >> arr[i];
		}
		if(arr[0] + arr[1] <= arr[n-1])
			cout << "1 2 " << n << "\n";
		else
			cout << "-1\n";
	}
}
