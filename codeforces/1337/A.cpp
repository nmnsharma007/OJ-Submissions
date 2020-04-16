#include<iostream>
using namespace std;
int main()
{
	int t,a,b,c,d;
	cin >> t;
	while(t--)
	{
		cin >> a >> b >> c >> d;
		int x = b;
		int y = c;
		int z;
		while(x+y <= d)
		{
			d--;
		}
		z = d;
		cout << x << " " << y << " " << z << "\n";
	}
}