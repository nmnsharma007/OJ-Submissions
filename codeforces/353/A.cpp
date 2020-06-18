#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int x[n],y[n];
    int tsum = 0,bsum = 0;
    for(int i=0;i<n;i++){
        cin >> x[i] >> y[i];
        tsum += x[i];
        bsum += y[i];
    }
    int flag = 0;
    if(tsum%2  || bsum%2 ){
        for(int i=0;i<n;i++){
            if((tsum-x[i]+y[i])%2 == 0 && (bsum-y[i]+x[i])%2 == 0){
                flag = 1;
                break;
            }
        }
        if(flag == 0)
            cout << "-1\n";
        else
            cout << "1\n";
    }
    else
        cout << "0\n";
}