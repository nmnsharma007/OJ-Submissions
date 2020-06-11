#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int arr[7];
	int pref[7];
	cin >> arr[0];
	pref[0] = arr[0];
	for(int i=1;i<7;i++){
		cin >> arr[i];
		pref[i] = pref[i-1] + arr[i];
	}
	int rem = n%pref[6];
	int ans;
	for(int i=0;i<7;i++){
		if(pref[i] >= rem)
		{
			ans = i+1;
			break;
		}
	}
	if(rem == 0){
		for(int i=6;i>=0;i--){
			if(arr[i] != 0){
				ans = i+1;
				break;
			}
		}
	}
	cout << ans << "\n";
}