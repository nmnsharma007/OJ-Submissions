#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k;
	cin >> n >> k;
	cout << min(n-k,k-1) + 3*n << "\n";
}