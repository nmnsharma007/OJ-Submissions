#include<bits/stdc++.h>
using namespace std;
int main()
{
    int d,sumTime;
    cin >> d >> sumTime;
    int minTime[d],maxTime[d];
    int minSum = 0,maxSum = 0;
    for(int i=0;i<d;i++)
    {
        cin >> minTime[i] >> maxTime[i];
        minSum += minTime[i];
        maxSum += maxTime[i];
    }
    if(sumTime <= maxSum && sumTime >= minSum)
    {
        cout << "YES\n";
        int ans[d];
        for(int i=0;i<d;i++)
            ans[i] = minTime[i];
        int dif = sumTime - minSum;
        for(int i=0;i<d;i++)
        {
            if(ans[i] + dif > maxTime[i])
            {
                int temp = maxTime[i] - minTime[i];
                ans[i] = maxTime[i];
                dif = dif - temp;
            }
            else
            {
                ans[i] = minTime[i] + dif;
                dif = 0;
                break;
            }   
        }
        for(int i=0;i<d;i++)
            cout << ans[i] << " ";
    }
    else
        cout << "NO";
}