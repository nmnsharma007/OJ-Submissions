#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
using ll = long long;
int main()
{
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int arr[n];
		for(int i=0;i<n;i++)
			cin >> arr[i];
		int count = 0;
		for(int i=0;i<n;i++){
			if(arr[i]%2 == i%2)
				continue;
			for(int j=i+1;j<n;j++){
				if(arr[j]%2 == i%2 && arr[i]%2 == j%2){
					swap(arr[i],arr[j]);
					count++;
					break;
				}
			}
		}
		int flag = 1;
		for(int i=0;i<n;i++){
			if(arr[i]%2 != i%2){
				flag = 0;
				break;
			}
		}
		if(flag == 0)
			cout << "-1\n";
		else
			cout << count << "\n";
	}
	return 0;
}