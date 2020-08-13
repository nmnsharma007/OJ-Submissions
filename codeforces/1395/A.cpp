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
		int arr[4];
		int mini = 1e9+7;
		int ocount = 0,ecount = 0;
		for(int i = 0; i < 4;++i){
			cin >> arr[i];
			if(arr[i]%2)
				++ocount;
			else
				++ecount;
			if(i <= 2)
				mini = min(mini,arr[i]);
		}
		if(ecount >= 3 || ecount == 0)
			cout << "Yes\n";
		else if(ecount == 2)
			cout << "No\n";
		else{
			if(arr[3]%2 == 0)
				cout << "Yes\n";
			else{
				if(mini >= 1)
					cout << "Yes\n";
				else
					cout << "No\n";
			}
		}
	}
}
