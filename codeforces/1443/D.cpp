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
		for(int i = 0; i < n;++i){
			cin >> arr[i];
		}
		int a[n],b[n];
		bool flag = true;
		a[0] = arr[0],b[0] = 0;
		for(int i = 1; i < n;++i){
			if(arr[i] <= arr[i-1]){
				b[i] = b[i-1];
				a[i] = arr[i]-b[i];
			}
			else{
				a[i] = a[i-1];
				b[i] = arr[i] - a[i];
			}
			if(a[i] > a[i-1] || b[i] < b[i-1] || a[i] < 0 || b[i] < 0){
				flag = false;
				break;
			}
		}
		cout << (flag ? "YES" : "NO") << '\n';
	}
}
