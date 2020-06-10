#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin >> q;
    while(q--)
    {
        int n;
        cin >> n;
        int arr[4*n];
        vector<int> freq(10001);
        for(int i=0;i<4*n;i++)
        {
            cin >> arr[i];
            freq[arr[i]]++;
        }
        int flag = 1;
        sort(arr,arr+4*n);
        for(int i=1;i<=10000;i++)
        {
            if(freq[i]&1)
            {
                flag = 0;
                break;
            }
        }
        int area = arr[0]*arr[4*n-1];
        for(int i=1;i<4*n-1;i+=2)
        {
            int temp = arr[i] * arr[4*n-i-1];
            if(temp != area)
            {
                flag = 0;
                break;
            }
        }
        if(flag)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}