#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
	int t;
	cin >> t;
	while(t--){
		int arr[3];
		cin >> arr[0] >> arr[1] >> arr[2];
		sort(arr,arr+3);
		if(arr[0] == arr[1] && arr[1] == arr[2]){
			cout << "YES\n";
			cout << arr[0] << " " << arr[1] << " " << arr[2] << "\n";
		}
		else if(arr[2] == arr[1] && arr[1] > arr[0]){
				cout << "YES\n";
				cout << arr[2] << " " << arr[0] << " " << arr[0] << "\n"; 
		}
		else if(arr[2] > arr[1] && arr[1] == arr[0]){
			cout << "NO\n";
		}
		else{
			cout << "NO\n";
		}
	}
}