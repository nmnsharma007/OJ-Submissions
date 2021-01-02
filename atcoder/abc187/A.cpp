#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int a,b;
	cin >> a >> b;
	int suma = a%10 + (a/10)%10 + (a/100);
	int sumb = b%10 + (b/10)%10 + (b/100);
	cout << max(suma,sumb) << "\n";
}
