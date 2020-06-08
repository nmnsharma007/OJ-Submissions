#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int arr[n];
	for(int i=0;i<n;i++)
		cin >> arr[i];
	int pos = 0;
	int i=0;
	while(i+1 < n && arr[i+1] >= arr[i])
		i++;
    pos = i;
	i++;
	while(i+1<n && arr[i+1] >= arr[i])
		i++;
	if(pos == n-1 || (i == n-1 && arr[0] >= arr[i]))
		cout << n-1-pos << "\n";
	else
		puts("-1\n");
}