#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	cin >> n >> m;
	int mini = min(n,m);
	if(mini % 2)
		cout << "Akshat";
	else
		cout << "Malvika";
}