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
		int arr[n];
		vector<int> freq(105,0);
		for(int i = 0;i < n;++i){
			cin >> arr[i];
			++freq[arr[i]];
		}
		sort(arr,arr+n);
		for(int i = 0; i <= 100;++i){
			if(freq[i] == 0){
				cout << 2*i << "\n";
				break;
			}
			if(freq[i] == 1){
				int tmp;
				for(int j = i+1; j <= 100;++j){
					if(freq[j] == 0){
						tmp = j;
						break;
					}
				}
				cout << tmp+i << "\n";
				break;
			}
		}
	}
}
