#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	int arr[n];
	for(int i = 0; i < n;++i){
		cin >> arr[i];
	}
	sort(arr,arr+n);
	cout << arr[0] << " ";
	for(int i = 1; i < n;i+=2){
		cout << arr[i] << " ";
	}
	int pos = (n&1) ? n-1 : n-2;
	for(int i = pos; i > 0;i -= 2){
		cout << arr[i] << " ";
	}
}