#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
	int x,y;
	cin >> x >> y;
	if(y&1)
		cout << "No\n";
	else{
		int c = 2*x-(y/2);
		int t = (y/2)-x;
		if(c >= 0 && t >= 0)
			cout << "Yes\n";
		else
			cout << "No\n";
	}
}