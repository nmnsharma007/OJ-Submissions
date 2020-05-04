#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[6];
    int sum = 0;
    for(int i=1;i<=5;i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    if(sum%5 == 0 && sum!=0)
        cout << sum/5;
    else
        cout << "-1";
}
