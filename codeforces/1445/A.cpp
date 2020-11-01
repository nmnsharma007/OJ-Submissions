#include<bits/stdc++.h>
using namespace std;
using ll = unsigned long long;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--){
		int n,x;
		cin >> n >> x;
		int a[n],b[n];
		for(int i = 0; i < n;++i){
			cin >> a[i];
		}
		for(int i = 0; i < n;++i){
			cin >> b[i];
		}
		sort(a,a+n);
		sort(b,b+n,greater<int>());
		int flag = 1;
		for(int i = 0; i < n;++i){
			if(a[i]+b[i] > x){
				flag = 0;
				break;
			}
		}
		if(flag)
			cout << "Yes\n";
		else
			cout << "No\n";
	}
}
