#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
using ll = long long;
int main()
{
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		ll ecount1=0,ecount2=0,ocount1=0,ocount2=0;
		for(int i=0;i<n;i++){
			ll temp;
			cin >> temp;
			if(temp&1)
				ocount1++;
			else
				ecount1++;
		}
		int m;
		cin >> m;
		for(int i=0;i<m;i++){
			int temp;
			cin >> temp;
			if(temp&1)
				ocount2++;
			else
				ecount2++;
		}
		ll ans = ecount2*ecount1+ocount1*ocount2;
		cout << ans << "\n";
	}
	return 0;
}

