#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n,x,y;
	cin >> n >> x >> y;
	int cnt = 0;
	for(int i = 0; i < n;++i){
		int a;
		cin >> a;
		if(a <= x)
			++cnt;
	}
	if(x > y)
		cout << n << '\n';
	else
		cout << (cnt+1)/2 << '\n';
}
