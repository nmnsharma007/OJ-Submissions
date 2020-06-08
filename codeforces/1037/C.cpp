#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	string a,b;
	cin >> a >> b;
	int cost = 0;
	int dif[n];
	for(int i=0;i<n;i++)
		dif[i] = (a[i]-'0')-(b[i]-'0');
	int i=0;
	while(i<n-1)
	{
		if(dif[i] == 0)
		{
			i++;
			continue;
		}
		if((dif[i] == -1 && dif[i+1] == 1) || (dif[i] == 1 && dif[i+1] == -1))
		{
			dif[i] = dif[i+1] = 0;
			cost++;
			i+=2;
		}
		else
		{
			dif[i] = 0;
			cost++;
			i++;
		}
	}
	if(dif[n-1] != 0)
		cost++;
	cout << cost << "\n";
}