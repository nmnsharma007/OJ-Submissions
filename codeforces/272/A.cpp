#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n+1];
    int sum = 0;
    for(int i=1;i<=n;i++){
        cin >> arr[i];
        sum += arr[i];
    }
    int count = 0;
    for(int i=1;i<=5;i++){
        int num = sum+i;
        int rem = num%(n+1);
        if(rem != 1)
            count++;
    }
    cout << count << "\n";
}