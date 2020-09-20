#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	int arr[n];
	for(int i = 0; i < n;++i){
		cin >> arr[i];
	}
	sort(arr,arr+n);
	set<int> s;
	for(int i = 0; i < n;++i){
		if(s.count(arr[i]-1) == 0 && arr[i] > 1)
			s.insert(arr[i]-1);
		else if(s.count(arr[i]) == 0)
			s.insert(arr[i]);
		else if(s.count(arr[i]+1) == 0)
			s.insert(arr[i]+1);
	}
	cout << s.size() << "\n";
}
