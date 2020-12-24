#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int x1,y1,x2,y2,x3,y3,x4,y4;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
	int a1,b1,a2,b2,a3,b3,a4,b4;
	cin >> a1 >> b1 >> a2 >> b2 >> a3 >> b3 >> a4 >> b4;
	int max_x = max(x1,max(x2,max(x3,x4)));
	int max_y = max(y1,max(y2,max(y3,y4)));
	int min_x = min(x1,min(x2,min(x3,x4)));
	int min_y = min(y1,min(y2,min(y3,y4)));
	int flag = 0;
	int a = min(a1-b1,min(a2-b2,min(a3-b3,a4-b4)));
	int b = max(a1-b1,max(a2-b2,max(a3-b3,a4-b4)));
	int c = min(a1+b1,min(a2+b2,min(a3+b3,a4+b4)));
	int d = max(a1+b1,max(a2+b2,max(a3+b3,a4+b4)));
	for(int x = -100;x <= 100;++x){
		for(int y = -100;y <= 100;++y){
			if(x > max_x || x < min_x)
				continue;
			if(y > max_y || y < min_y)
				continue;
			if(x-y >= a && x-y <= b && x+y <= d && x+y >= c){
				flag = 1;
				break;
			}
		}
	}
	if(flag == 1)
		cout << "YES\n";
   	else
		cout << "NO\n";
}
