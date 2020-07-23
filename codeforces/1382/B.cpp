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
		int count = 0;
		int arr[n];
		for(int i = 0; i < n;++i){
			cin >> arr[i];
			if(arr[i] == 1)
				count++;
		}
		int i = 0;
		if(count == n){
			if(count&1)
				cout << "First\n";
			else
				cout << "Second\n";
			continue;
		}
		count = 0;
		while(i < n && arr[i] == 1){
			++i;
			count++;
		}
		if(count&1)
			cout << "Second\n";
		else
			cout << "First\n";
	}
}