#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
	int t;
	cin >> t;
	int x;
	for(int i=0;i<t;i++){
		cin >> x;
		if(x%4 == 0)
			cout << "YES\n";
		else
			cout << "NO\n";
	}
}