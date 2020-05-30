#include<bits/stdc++.h>
using namespace std;
int main()
{
	double h,l,ans;
	cin >> h >> l;
	ans = (l*l-h*h)/(2*h);
	printf("%.12f\n",ans);
}