#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	double arr[n];
	double sum = 0;
	for(int i=0;i<n;i++)
	{
		cin >> arr[i];
		sum += arr[i];
	}
	double ans = sum/(double)n;
	printf("%.8f",ans);
}