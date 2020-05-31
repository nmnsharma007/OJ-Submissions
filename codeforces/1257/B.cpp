#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int x,y;
		cin >> x >> y;
		if(x >= y)
			cout << "YES\n";
		else 
		{
			if(x == 2 && y == 3)
				cout << "YES\n";
			else if(x == 3)
				cout << "NO\n";
			else if(x == 1)
				cout << "NO\n";
			else if(x == 2 && y>3)
				cout << "NO\n";
			else
			    cout << "YES\n";
		}
	}
}