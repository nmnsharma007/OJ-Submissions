#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    int sum = 0;
    for(int i=0;i<n;i++){
        cin >> arr[i];
        sum += arr[i];
    }
    int temp = 0;
    for(int i=0;i<n;i++){
        temp += arr[i];
        if(temp >= (sum+1)/2){
            cout << i+1 << "\n";
            return 0;
        }
    }
}