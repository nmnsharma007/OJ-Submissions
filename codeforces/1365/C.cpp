#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int a[n];
	int pos[n];
	for(int i=0;i<n;i++)
	{
		 cin >> a[i];
		 pos[a[i]] = i;
	}
	int b[n];
	for(int i=0;i<n;i++)
		cin >> b[i];
	int freq[n];
	memset(freq,0,sizeof(freq));
	for(int i=0;i<n;i++)
	{
		int num = i - pos[b[i]];
		if(num < 0)
			num += n;
		freq[num]++;
	}
	sort(freq,freq+n);
	cout << freq[n-1] << "\n";
}