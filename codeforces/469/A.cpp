#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int freq[n+1];
	memset(freq,-1,sizeof(freq));
	int psize,qsize;
	cin >> psize;
	int p[psize];
	for(int i=0;i<psize;i++)
	{
		cin >> p[i];
		if(freq[p[i]] == -1)
			freq[p[i]] = 1;
	}
	cin >> qsize;
	int q[qsize];
	for(int i=0;i<qsize;i++)
	{
		cin >> q[i];
		if(freq[q[i]] == -1)
			freq[q[i]] = 1;
	}
	int flag = 1;
	for(int i=1;i<=n;i++)
	{
		if(freq[i] == -1)
		{
			flag = 0;
			break;
		}
	}
	if(flag)
		cout << "I become the guy.";
	else
		cout << "Oh, my keyboard!";
}