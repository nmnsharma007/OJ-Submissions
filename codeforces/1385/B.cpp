#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		vector<int> ans;
		for(int i = 0; i < 2*n;i++){
			int x;
			cin >> x;
			if(find(ans.begin(),ans.end(),x) == ans.end()){
				ans.push_back(x);
			}
		}
		for(auto x : ans)
			cout << x << " ";
		cout << "\n";
	}
}