#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int a,b;
	cin >> a >> b;
	int x = (a+b)/2;
	int y = a-x;
	cout << x << " " << y << "\n";
}
