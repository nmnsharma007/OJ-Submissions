#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin >> s;
	string ans = "";
	int end = s.length()-1;
	while(end-2 >= 0 && s[end] == 'B' && s[end-1] == 'U' && s[end-2] == 'W')
		end -= 3;
	int i=0;
	while(i <= end)
	{
		int flag = 0;
		while(i+2 <= end && s[i] == 'W' && s[i+1] == 'U' && s[i+2] == 'B')
		{
			flag = 1;
			i+=3;
		}
		if(flag && i <= end)
			ans += " ";
		if(i <= end)
			ans += s[i];
		i++;
	}
	cout << ans;
}