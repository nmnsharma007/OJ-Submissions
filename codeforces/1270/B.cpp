#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int arr[n];
		for(int i=0;i<n;i++){
			cin >> arr[i];
		}
		int flag = 0;
		for(int i=0;i<n-1;i++){
			if(abs(arr[i]-arr[i+1]) >= 2){
				flag = 1;
				puts("YES\n");
				cout << i+1 << " " << i+2 << "\n";
				break;
			}
		}
		if(flag == 0)
			puts("NO\n");
	}
}