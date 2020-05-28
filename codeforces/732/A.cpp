#include<bits/stdc++.h>
using namespace std;
int main()
{
	int k,r;
	cin >> k >> r;
	for(int i=1;i<=10;i++)
	{
		int temp = k*i;
		if(temp%10 == 0 || temp%10 == r)
		{
			cout << i << "\n";
			break;
		}
	}
}