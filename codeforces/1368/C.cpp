#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int x = 0,y = 0;
    cout << 3*n+4 << "\n";
    cout << x << " " << y << "\n";
    cout << x+1 << " " << y << "\n";
    cout << x << " " << y+1 << "\n";
    cout << x+1 << " " << y+1 << "\n";
    x = 2,y = 2;
    for(int i=0;i<n;i++){
        cout << x << " " << y << "\n";
        cout << x-1 << " " << y << "\n";
        cout << x << " " << y-1 << "\n";
        x++,y++;
    }
}