#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a1,a2;
    cin >> a1 >> a2;
    int maxi = max(a1,a2);
    int mini = min(a1,a2);
    long long int ans = 0;
    int temp,t;
    while(maxi!=0 && mini!=0)
    {
        if(mini==1 && maxi==1)
            break;
        if(maxi%2 == 0)
            t = (maxi-2)/2;
        else
            t = maxi/2; 
        if(maxi<=2 && mini<=2)
        {
            ans++;
            break;
        }
        ans += t;
        temp = maxi;
        maxi = mini+t;
        mini = temp - t*2;
    }  
    cout << ans;
}