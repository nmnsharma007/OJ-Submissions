#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        ll arr[n];
        ll sum = 0;
        for(int i=0;i<n;i++)
        {
            cin >> arr[i];
            sum += arr[i];
        }
        ll suf_sum = 0,pref_sum = 0;
        bool flag = true;
        for(int i=0;i<n;i++)
        {
            pref_sum += arr[i];
            if(pref_sum <= 0)
            {
                flag = false;
                break;
            }
        }
        if(!flag)
            cout << "NO\n";
        else
        {
            flag = true;
            for(int i=n-1;i>=0;i--)
            {
                suf_sum += arr[i];
                if(suf_sum <= 0)
                {
                    flag = false;
                    break;
                }
            }
            if(!flag)
                cout << "NO\n";
            else
                cout << "YES\n";
        }
    }
}