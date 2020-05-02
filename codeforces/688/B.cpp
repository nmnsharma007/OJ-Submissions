#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int n = s.length();
    int arr[2*n];
    for(int i=0;i<n;i++)
    {
        arr[i] = s[i] - '0';
    }
    int left = 0;
    int right = 2*n-1;
    while(left < right)
    {
        arr[right--] = arr[left++];
    }
    for(int i=0;i<2*n;i++)
        cout << arr[i];
}
