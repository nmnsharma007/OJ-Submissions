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
		int ocount = 0,ecount = 0;
		int sum = 0;
		for(int i = 0; i < n;++i){
			int x;
			cin >> x;
			if(x%2 == 0)
				++ecount;
			else
				++ocount;
			sum += x;
		}
		if(sum%2 == 0 && ocount == 0)
			cout << "NO\n";
		else if(sum%2 == 1)
			cout << "YES\n";
		else if(sum%2 == 0 && ecount == 0)
			cout << "NO\n";
		else
			cout << "YES\n";
	}
}
