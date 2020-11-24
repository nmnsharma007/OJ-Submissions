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
		vector<int> freq(n+1,0);
		for(int i = 1; i <= n;++i){
			cin >> arr[i];
			++freq[arr[i]];
		}
		int val = -1;
		for(int i = 1; i <= n;++i){
			if(freq[i] == 1){
				val = i;
				break;
			}
		}
		if(val == -1)
			cout << "-1\n";
		else{
			for(int i = 1; i <= n;++i){
				if(arr[i] == val){
					cout << i << "\n";
					break;
				}
			}
		}
	}
}
