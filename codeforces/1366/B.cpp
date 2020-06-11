#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n,x,m;
		cin >> n >> x >> m;
		int left = x;
		int right = x;
		for(int i=0;i<m;i++){
			int l,r;
			cin >> l >> r;
			if(r < left)
				continue;
			if(l > right)
				continue;
			left = min(left,l);
			right = max(right,r);
		}
		cout << right-left+1 << "\n";
	}
}