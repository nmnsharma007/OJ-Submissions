#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int arr[3];
	cin >> arr[0] >> arr[1] >> arr[2];
	sort(arr,arr+3);
	if(arr[0] == 1)
		cout << "YES\n";
	else if(arr[0] == 2 && arr[1] == 2)
		cout << "YES\n";
	else if(arr[0] == arr[1] && arr[1] == arr[2] && arr[2] == 3)
		cout << "YES\n";
	else if(arr[0] == 2 && arr[1] == 4 && arr[2] == 4)
		cout << "YES\n";
	else
		cout << "NO\n";
}
