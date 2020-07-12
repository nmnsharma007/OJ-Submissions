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
		int arr[n+1];
		for(int i = 1;i <= n;i++){
			cin >> arr[i];	
		}
		int a = -1,b = -1,c = -1;
		for(int i = 1;i <= n-1;i++){
			if(arr[i] < arr[i+1]){
				a = i;
				break;
			}
		}
		for(int i = n; i > 1;i--){
			if(arr[i] < arr[i-1]){
				c = i;
				break;
			}
		}
		if(a+1 < c && (a != -1 && c != -1)){
			for(int i = a+1; i < c;i++){
				if(arr[i] > arr[a] && arr[i] > arr[c]){
						b = i;
						break;
				}
			}
		}
		if(b == -1)
			cout << "NO\n";
		else{
			cout << "YES\n";
			cout << a << " " << b << " " << c << "\n";
		}
	}
}
