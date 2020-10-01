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
		int n,k;
		cin >> n >> k;
		set<int> s;
		for(int i = 0; i < n;++i){
			int x;
			cin >> x;
			s.insert(x);
		}
		int num = s.size();
		if(k == 1 && num > 1)
			cout << "-1\n";
		else if(num <= k)
			cout << "1\n";
		else{
			num -= k;
			int ans = (num+k-2)/(k-1)+1;
			cout << ans << "\n";
		}
	}
}
