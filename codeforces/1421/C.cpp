#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	string s;
	cin >> s;
	int n = s.length();
	cout << "3\n";
	cout << "L " << n-1 << "\n";
	cout << "R " << n-1 << "\n";
	cout << "R " << 2*n-1 << "\n";
}
