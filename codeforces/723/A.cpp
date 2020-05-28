#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x1,x2,x3;
	cin >> x1 >> x2 >> x3;
	int dis1 = abs(x1-x3) + abs(x2-x1);
	int dis2 = abs(x2-x3) + abs(x2-x1);
	int dis3 = abs(x1-x3) + abs(x2-x3);
	cout << min(dis1,min(dis2,dis3)) << "\n";
}