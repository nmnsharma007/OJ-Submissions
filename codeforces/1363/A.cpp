#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n,x;
		cin >> n >> x;
		int arr[n];
		int ocount = 0,ecount = 0;
		for(int i=0;i<n;i++)
		{
			cin >> arr[i];
			if(arr[i]%2)
				ocount++;
			else
				ecount++;
		}
		if(ocount == 0)
			cout << "No\n";
		else if(ecount == 0 && x%2 == 0)
		    cout << "No\n";
		else if(ocount%2 == 1 && ecount >= x-ocount)
			cout << "Yes\n";
		else if(ocount%2 == 0 && ecount>=x-ocount+1)
			cout << "Yes\n";
		else
			cout << "No\n";
	}
}