#include<bits/stdc++.h>
using namespace std;
using ll = unsigned long long;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		vector<int> b(n);
		for(int i = 0; i < n;++i){
			cin >> b[i];
		}
		sort(b.begin(),b.end());
		int flag = 0;
		for(int i = 0; i < n-1;++i){
			if(b[i] == b[i+1]){
				flag = 1;
				break;
			}
		}
		if(flag == 1)
			cout << "YES\n";
		else
			cout << "NO\n";
	}
}
