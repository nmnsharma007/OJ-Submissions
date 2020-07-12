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
		int l = -1,r = -1;
		for(int i = 1;i <= n;i++){
			cin >> arr[i];
			if(arr[i] != i && l == -1)
				l = i;
			if(arr[i] != i)
				r = i;
		}
		if(l == -1 && r == -1)
			cout << "0\n";
		else{
			int flag = 1;
			for(int i = l; i <= r;i++){
				if(arr[i] == i){
					flag = 0;
					break;
				}
			}
			if(flag == 1)
				cout << "1\n";
			else
				cout << "2\n";
		}
	}
}