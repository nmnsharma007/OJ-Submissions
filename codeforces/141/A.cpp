#include<bits/stdc++.h>
using namespace std;
int main()
{
	int freq1[26],freq2[26];
	memset(freq1,0,sizeof(freq1));
	memset(freq2,0,sizeof(freq2));
	string host,guest,pile;
	cin >> guest;
	cin >> host;
	cin >> pile;
	for(int i=0;i<guest.length();i++)
		freq1[guest[i] - 'A']++;
	for(int i=0;i<host.length();i++)
		freq1[host[i]-'A']++;
	for(int i=0;i<pile.length();i++)
		freq2[pile[i]-'A']++;
	int flag = 1;
	for(int i=0;i<26;i++)
	{
		if(freq1[i] != freq2[i])
		{
			flag = 0;
			break;
		}
	}
	if(flag)
		cout << "YES\n";
	else
		cout << "NO\n";
}