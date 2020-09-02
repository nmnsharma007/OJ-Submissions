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
		int arr[n];
		int sum = 0;
		for(int i = 0; i < n;++i){
			cin >> arr[i];
			sum += arr[i];
		}
		sort(arr,arr+n,greater<int>());
		if(arr[0] > sum - arr[0] || sum%2 == 1)
			cout << "T\n";
		else
			cout << "HL\n";
	}
}
