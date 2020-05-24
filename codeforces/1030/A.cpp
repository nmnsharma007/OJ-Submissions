#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int arr[n];
	int flag = 1;
	for(int i=0;i<n;i++)
	{
		cin >> arr[i];
		if(arr[i] == 1)
			flag = 0;
	}
	if(flag)
		cout << "easy";
	else
		cout << "hard";
}