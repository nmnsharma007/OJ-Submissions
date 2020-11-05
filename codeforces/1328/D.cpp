#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int q;
	cin >> q;
	while(q--){
		int n;
		cin >> n;
		int arr[n],ans[n];
		set<int> s;
		for(int i = 0; i < n;++i){
			cin >> arr[i];
			s.insert(arr[i]);
		}
		if(s.size() == 1){
			cout << "1\n";
			for(int i = 0; i < n;++i){
				ans[i] = 1;
			}
		}
		else{
			int k = 2;
			ans[0] = 1;
			for(int i = 1; i < n;++i){
				if(arr[i] == arr[i-1]){
					ans[i] = ans[i-1];
				}
				else{
					if(ans[i-1] == 1)
						ans[i] = 2;
					else
						ans[i] = 1;
				}
			}
			if(arr[n-1] != arr[0] && ans[n-1] == ans[0]){
				int pos = n;
				for(int i = n-1; i > 0;--i){
					if(arr[i] == arr[i-1]){
						pos = i;
						break;
					}
				}
				if(pos < n){
					if(ans[pos-1] == 1)
						ans[pos] = 2;
					else
						ans[pos] = 1;
					for(int i = pos+1; i < n;++i){
						if(ans[i-1] == 1)
							ans[i] = 2;
						else
							ans[i] = 1;
					}
				}
				else{
					k = 3;
					ans[n-1] = 3;
				}
			}
			cout << k << "\n";
		}
		for(int i = 0; i < n;++i){
			cout << ans[i] << " ";
		}
		cout << "\n";
	}
}
