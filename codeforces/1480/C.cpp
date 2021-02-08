#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	int low = 1,high = n;
	int arr[n+2];
	arr[0] = arr[n+1] = n+1;
	while(low < high){
		int mid = (low+high)/2;
		cout << "? " << mid << endl;
		cin >> arr[mid];
		cout << "? " << mid+1 << endl;
		cin >> arr[mid+1];
		if(arr[mid] < arr[mid+1])
			high = mid;
		else
			low = mid+1;
	}
	cout << "! " << low << endl;
}
