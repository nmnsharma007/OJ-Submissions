#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int arr[n];
		for(int i = 0; i < n;i++){
			cin >> arr[i];
		}
		int trans = 0,flag = 1;
		for(int i = 1; i < n;i++){
			if(trans == 0){
				if(arr[i] >= i)
					continue;
				else
					trans = 1;
			}
			if(trans == 1){
				if(arr[i] >= n-1-i && arr[i-1] > n-1-i)
					continue;
				else{
					flag = 0;
					break;
				}
			}
		}
		if(flag)
			puts("YES");
		else
			puts("NO");
	}
}
