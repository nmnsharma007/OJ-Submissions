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
		int n,x,y;
		cin >> n >> x >> y;
		vector<int> ans;
		int div;
		for(int i = 1; i <= y-x;++i){
			if((y-x)%i == 0 && (y-x)/i + 1 <= n){
				div = i;
				break;
			}
		}
		int num = 0;
		for(int i = y;num < n && i >= 1;i-=div){
			++num;
			ans.push_back(i);
		}
		int val = y + div;
		while(num < n){
			++num;
			ans.push_back(val);
			val += div;
		}
		for(auto x : ans)
			cout << x << " ";
		cout << "\n";
	}
}
