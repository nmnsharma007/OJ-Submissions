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
		string arr[n];
		vector<int> freq(10,0);
		for(int i = 0; i < n;++i){
			cin >> arr[i];
			++freq[arr[i][0]-'0'];
		}
		int ans = 0;
		for(int i = 0; i < n;++i){
			for(int j = 0;j < n;++j){
				if(j == i)
					continue;
				if(arr[i] != arr[j])
					continue;
				for(char rem = '0';rem <= '9';++rem){
					if(freq[rem-'0'] >= 1)
						continue;
					freq[rem-'0'] = 1;
					arr[j][0] = rem;
					++ans;
					break;
				}
			}
		}
		cout << ans << "\n";
		for(int i = 0; i < n;++i){
			cout << arr[i] << "\n";
		}
	}
}
