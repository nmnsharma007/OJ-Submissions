#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
	int n,k;
	cin >> n >> k;
	int arr[n];
	for(int i = 0; i < n;i++){
		cin >> arr[i];
	}
	int ans = 0;
	int aux[n];
	for(int i = 0;i < n-1;i++){
		aux[i] = arr[i] - arr[i+1];
	}
	sort(aux,aux+n);
	for(int i = 0; i < k-1;i++){
		ans += aux[i];
	}
	ans += arr[n-1] - arr[0];
	cout << ans << "\n";
}