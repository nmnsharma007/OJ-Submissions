#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int arr[n+1];
	for(int i=1;i<=n;i++){
		cin >> arr[i];
	}
	int count = 0;
	int ans = 0;
	for(int i=1;i<=n;i++){
		ans = max(ans,arr[i]);
		if(ans == i)
			count++;
	}
	cout << count << "\n";
}