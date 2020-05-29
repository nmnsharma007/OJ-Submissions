#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n,m,k;
		cin >> n >> m >> k;
		if(n/k >= m)
			cout << m << "\n";
		else
			cout << n/k - ((m-n/k)+k-2)/(k-1) << "\n";
	}
}