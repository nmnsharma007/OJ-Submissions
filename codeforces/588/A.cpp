#include<bits/stdc++.h>
using namespace std;
#define INF 100000
int main()
{
	int n;
	cin >> n;
	int a[n],p[n];
	for(int i=0;i<n;i++)
		cin >> a[i] >> p[i];
	int price = INF;
	int sum = 0;
	for(int i=0;i<n;i++)
	{
		price = min(price,p[i]);
		sum += price * a[i];
	}
	cout << sum << "\n";
}