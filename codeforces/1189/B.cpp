#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int arr[n];
	for(int i = 0; i < n;i++){
		cin >> arr[i];
	}
	sort(arr,arr+n);
	if(arr[0] + arr[n-2] <= arr[n-1]){
		if(arr[n-1] >= arr[n-2] + arr[n-3]){
			cout << "NO\n";
			return 0;
		}
		else{
			swap(arr[n-1],arr[n-2]);
		}
	}
	cout << "YES\n";
	for(int i = 0; i < n;i++){
		cout << arr[i] << " ";
	}
}