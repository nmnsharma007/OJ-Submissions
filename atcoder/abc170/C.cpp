#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
	int x,n;
	cin >> x >> n;
	set<int> s;
	for(int i=0;i<n;i++){
		int temp;
		cin >> temp;
		s.insert(temp);
	}
	int dif = 1000000;
	int ans = 0;
	for(int i=0;i<=101;i++){
		if(s.find(i) != s.end())
			continue;
		//cout << "dif:" << dif << "\n";
		//dif = min(dif,abs(x-i));
		if(dif > abs(x-i)){
			ans = i;
			dif = abs(x-i);
		}
	}
	cout << ans << "\n";
}