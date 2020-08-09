#include<bits/stdc++.h>
using namespace std;
using ll = long long;
long double power(int x,int d,int y)
{
	long double ans = 1.0;
	long double temp = (long double)x/(long double)d;
	while(y > 0){
		if(y%2)
			ans = ans * temp;
		y /= 2;
		temp = temp * temp;
	}
	return ans;
}
int main()
{
	int n,m;
	cin >> m >> n;
	vector<long double> val(m+1);
	val[0] = 0.0;
	for(int i = 1; i <= m;++i){
		val[i] = power(i,m,n);
	}
	long double ans = 0.0;
	for(int i = 1; i <= m;++i){
		ans = ans + (long double)(val[i] - val[i-1]) * (long double)i;
	}
	printf("%.12Lf\n",ans);
}
