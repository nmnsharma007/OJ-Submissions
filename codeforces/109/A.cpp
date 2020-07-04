#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int x,y=-1;
    for(int i=0;i<=n/7;i++){
        int temp = n - 7*i;
        if(temp%4 == 0){
            x = temp/4;
            y = i;
            break;
        }
    }
   // cout << "x:" << x << "\ny:" << y << "\n";
    if(y != -1){
        for(int i=0;i<x%7;i++)
            cout << "4";
        for(int i=0;i<y+(x/7)*4;i++)
            cout << "7";
    }
    else
        cout << "-1";
}
