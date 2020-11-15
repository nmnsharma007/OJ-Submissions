#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll sx,sy,gx,gy;
    cin >> sx >> sy >> gx >> gy;
    double ans = sy*gx+gy*sx;
    ans /= (sy+gy);
    cout << fixed << setprecision(9) << ans << "\n";   
}