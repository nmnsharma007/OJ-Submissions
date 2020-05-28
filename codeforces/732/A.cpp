#include<bits/stdc++.h>
using namespace std;
int main()
{
	int k,r;
	cin >> k >> r;
	int n,m = 10000000;
	for(int i=1;i<=k;i++)
	{
		int temp = 10*i;
		if(temp%k == 0)
		{
			n = temp/k;
			break;
		}
	}
	for(int i=0;i<=k;i++)
	{
		int temp = 10*i+r;
		if(temp%k == 0)
		{
			m = temp/k;
			break;
		}
	}
	cout << min(m,n) << "\n";
}