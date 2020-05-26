#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	if(n > 0)
		cout << n << "\n";
	else
	{
		n = n * (-1);
		//n = max(n/10,((n%100)%10)*10 + n/100);
		int temp = n/10;
		int temp1 = (n/100)*10 + n%10;
		temp *= (-1);
		temp1 *= (-1);
		cout << max(temp,temp1) << "\n";
	}
}	