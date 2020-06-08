#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int c,n;
	cin >> n >> c;
	int arr[n];
	for(int i=0;i<n;i++)
		cin >> arr[i];
	int dif = 0;
	for(int i=0;i<n-1;i++)
	{
		int temp = arr[i] - arr[i+1] - c;
		if(dif <=  temp && temp >= 0)
			dif = temp;
	}
	if(dif == 1000000)
		dif = 0;
	//cout << "pos:" << pos << "\n";
	cout << dif << "\n";
}
