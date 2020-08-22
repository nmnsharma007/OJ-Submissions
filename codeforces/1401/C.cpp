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
		int arr[n],temp[n];
		int mini = 1e9+7;
		for(int i = 0; i < n;++i){
			cin >> arr[i];
			temp[i] = arr[i];
			mini = min(mini,arr[i]);
		}
		sort(temp,temp+n);
		int flag = 1;
		for(int i = 0; i < n;++i){
			if(arr[i] == temp[i])
				continue;
			if(arr[i] % mini == 0 && temp[i] % mini == 0)
				continue;
			else{
				flag = 0;
				break;
			}
		}
		if(flag)
			cout << "YES\n";
		else
			cout << "NO\n";
	}
}
