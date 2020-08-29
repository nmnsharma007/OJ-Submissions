#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	double d,t,s;
	cin >> d >> t >> s;
	if((double)d/(double)s <= (double)t)
		cout << "Yes\n";
	else
		cout << "No\n";
}
