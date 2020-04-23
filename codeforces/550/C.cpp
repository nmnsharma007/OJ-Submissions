#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int n = s.length();
    int arr[n];
    for(int i=0;i<n;i++)
        arr[i] = s[i]-'0';
    int flag = 0;
    int temp;
    for(int i=0;i<n;i++)
    {
        temp = arr[i];
        if(temp % 8 == 0)
        {
            flag = 1;
            break;
        }
        for(int j=i+1;j<n;j++)
        {
            temp = arr[i] * 10 + arr[j];
            if(temp % 8 == 0)
            {
                flag = 1;
                break;
            }
            for(int k = j+1;k<n;k++)
            {
                temp = arr[i] * 100 + arr[j] * 10 + arr[k];
                if(temp%8 == 0)
                {
                    flag = 1;
                    break;
                }
            }
            if(flag)
                break;
        }
        if(flag)
        break;
    }
    if(flag)
 {
        cout << "YES\n";
        cout << temp;
}
    else
        cout << "NO";
}