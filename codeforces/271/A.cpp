#include<bits/stdc++.h>
using namespace std;
bool isValid(int y)
{
	int freq[11];
	memset(freq,0,sizeof(freq));
	while(y)
	{
		int rem = y%10;
		if(freq[rem])
			return false;
		else
			freq[rem]++;
		y /= 10;
	}
	return true;
}
int main()
{
	int y;
	cin >> y;
	int flag = 0;
	while(!flag)
	{
		y++;
		if(isValid(y))
		{
			flag = 1;
			break;
		}
	}
	cout << y << "\n";
}