#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a = 0,b = 0;
		int arr[n];
		for(int i = 0; i < n;++i){
			cin >> arr[i];
			if(arr[i] == 1)
				++a;
			else
				++b;
		}
		bool exist = false;
		for(int i = 0; i <= a;++i){
			for(int j = 0; j <= b;++j){
				int tempa = a-i;
				int tempb = b-j;
				if(tempa + 2*tempb == i + 2*j){
					exist = true;
					break;
				}
			}
			if(exist)
				break;
		}
		if(exist)
			cout << "YES\n";
		else
			cout << "NO\n";
	}
}
