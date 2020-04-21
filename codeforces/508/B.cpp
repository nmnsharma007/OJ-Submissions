#include<bits/stdc++.h>
using namespace std;;
int main()
{
    string s;
    cin >> s;
    int n = s.length();
    int min = 10;
    int flag = 0;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        arr[i] = s[i] - '0';
        if(arr[i]%2 == 0)
            flag = 1;
    }
    if(flag)
    {
        flag = 0;
        for(int i=0;i<n-1;i++)
        {
            if(arr[i] < arr[n-1] && arr[i]%2 == 0)
            {
                flag = 1;
                swap(arr[i],arr[n-1]);
                break;
            }
        }
        if(flag == 0)
        {
            for(int i=n-2;i>=0;i--)
            {
                if(arr[i]%2 == 0)
                {
                    swap(arr[i],arr[n-1]);
                    break;
                }
            }
        }
            for(int i=0;i<n;i++)
                cout << arr[i];
    }
    else
        cout << "-1";
}