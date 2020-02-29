#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int n = s.length();
    int size = (n+1)/2;
    int arr[size];
    int k = 0;
    for(int i = 0; i < s.length();i++)
    {
        if(s[i] >= '0' && s[i] <= '9')
        {
            arr[k] = (s[i] - '0');
            k++;
        }
    }
    sort(arr,arr+size);
    for(int i = 0; i < size-1;i++)
    {
        cout << arr[i] << "+";
    }
    cout << arr[size-1];
}
