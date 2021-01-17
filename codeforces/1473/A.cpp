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
		int n,d;
		cin >> n >> d;
		int arr[n];
		for(int i = 0; i < n;++i){
			cin >> arr[i];
		}
		sort(arr,arr+n);
		bool flag = true;
		for(int i = 0; i < n;++i){
			if(i == 0 || i == 1){
				if(arr[i] > d){
					flag = false;
					break;
				}
			}
			else if(arr[i] > d){
				if(arr[0]+arr[1] > d){
					flag = false;
					break;
				}
			}
		}
		cout << (flag ? "YES" : "NO") << "\n";
	}
}
