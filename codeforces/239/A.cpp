#include<bits/stdc++.h>
using namespace std;
int main()
{
    int y,k,n;
    cin >> y >> k >> n;
    int limit = n/k;
    int flag = 0;
    for(int i = 1;i <= limit;i++){
        int sum = k * i;
        if(sum >= y+1){
            flag = 1;
            cout << sum - y << " ";
        }
        else
            continue;
    }
    if(flag == 0)
        cout << "-1\n";
}