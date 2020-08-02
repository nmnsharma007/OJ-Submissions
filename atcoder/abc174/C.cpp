#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int k;
	cin >> k;
	if(k%2 == 0)
		cout << "-1\n";
	else{
		map<int,int> mp;
		int rem = 7%k;
		int ans = 1;
		int flag = 0;
		while(mp.count(rem) == 0){
			if(rem == 0){
				flag = 1;
				break;
			}
			++ans;
			mp[rem] = 1;
			rem = (rem*10 + 7)%k;
		}
		if(flag)
			cout << ans << "\n";
		else
			cout << "-1\n";
	}
}