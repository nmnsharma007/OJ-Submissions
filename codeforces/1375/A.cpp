#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = 1e9+7;
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
			if(i&1){
				if(arr[i] > 0)
					arr[i] *= -1;
			}
			else{
				if(arr[i] < 0)
					arr[i] *= -1;
			}
			cout << arr[i] << " ";
		}
		cout << "\n";
	}	
}