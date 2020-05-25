#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n,a,b,c,d;
		cin >> n >> a >> b >> c >> d;
		int min_weight = n * abs(a-b);
		int max_weight = n * abs(a+b);
		if(min_weight > abs(c+d) || max_weight < abs(c-d))
			cout << "No\n";
		else
			cout << "Yes\n"; 
	}
}