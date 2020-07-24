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
		string a,b;
		cin >> a >> b;
		vector<int> ans;
		for(int i = n-1; i >= 0; --i){
			if(a[i] == b[i])
				continue;
			if(a[i] != a[0]){
				ans.push_back(1);
				a[0] = (a[0] == '1') ? '0' : '1';
			}
			//cout << a << "\n";
			int left = 0;
			int right = i;
			while(left <= right){
					char c = a[right];
					a[right] = '1' - (a[left] - '0');
					a[left] = '1' - (c - '0');
					++left;
					--right;
			}
		//	cout << a << "\n";
			ans.push_back(i+1);
		}
		cout << ans.size() << " ";
		for(auto x : ans)
			cout << x << " ";
		cout << "\n";
	}
}