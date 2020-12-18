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
		int arr[3];
		cin >> arr[0] >> arr[1] >> arr[2];
		sort(arr,arr+3);
		int x = arr[0],y = arr[1],z = arr[2];
		if((x+y+z)%9 == 0){
			int shots = ((x+y+z)/9)*7;
			if(shots/7 <= x)
				cout << "YES\n";
			else
				cout << "NO\n";
		}
		else
			cout << "NO\n";
	}
}
