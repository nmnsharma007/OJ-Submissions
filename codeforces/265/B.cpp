#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    int sum = n;
    for(int i=0;i<n;i++){
        cin >> arr[i];
        if(i == 0)
            sum += arr[i];
        else
            sum += abs(arr[i-1]-arr[i])+1;
    }
    cout << sum << "\n";
}