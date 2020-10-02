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
		int n,m;
		cin >> n >> m;
		int flag = 0;
		for(int i = 0; i < n;++i){
			int w,x,y,z;
			cin >> w >> x >> y >> z;
			if(x == y)
				flag = 1;
		}
		if(m%2)
			flag = 0;
		if(flag)
			cout << "YES\n";
		else
			cout << "NO\n";
	}
}
