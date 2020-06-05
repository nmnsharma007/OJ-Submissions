#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int arr[2*n];
	set<int> s;
	for(int i=0;i<2*n;i++)
	{
		int x;
		cin >> x;
		arr[i] = x;
		s.insert(x);
	}
	if(s.size() == 1)
		cout << "-1\n";
	else
	{
		sort(arr,arr+2*n);
		for(int i=0;i<2*n;i++)
			cout << arr[i] << " ";
	}
}