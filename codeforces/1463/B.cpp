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
		vector<int> ans;
		for(int i = 0; i < n;++i){
			int x;
			cin >> x;
			int num = 1;
			while(num < x){
				num = num*2;
			}
			if(num > x)
				num /= 2;
			ans.push_back(num);
		}
		for(auto x : ans)
			cout << x << " ";
		cout << "\n";
	}
}
