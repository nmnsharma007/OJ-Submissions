#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n,x;
	cin >> n >> x;
	int intake = 0;
	int ans = -1;
	for(int i = 0; i < n;++i){
		int v,p;
		cin >> v >> p;
		intake += v*p;
		if(intake > x*100 && ans == -1)
			ans = i+1;
	}
	cout << ans << "\n";
}
