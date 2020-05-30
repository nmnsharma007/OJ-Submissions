#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		string s;
		cin >> s;
		int ans = 0;
		int count = 0;
		for(int i=0;i<n;i++)
		{
			int temp = s[i] - '0';
			if(temp%2 && count < 2)
			{
				ans = ans*10 + temp;
				count++;
			}
		}
		if(count != 2)
			cout << "-1\n";
		else
			cout << ans << "\n";
	}
}