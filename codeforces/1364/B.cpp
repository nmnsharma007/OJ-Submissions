#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin >> arr[i];
       // int sum = 0;
        vector<int> temp;
        temp.push_back(arr[0]);
        for(int i=1;i<n-1;i++){
            if(arr[i] > arr[i-1] && arr[i] > arr[i+1])
                temp.push_back(arr[i]);
            else if(arr[i] < arr[i-1] && arr[i] < arr[i+1])
                temp.push_back(arr[i]);
        }
        temp.push_back(arr[n-1]);
        cout << temp.size() << "\n";
        for(auto x:temp)
            cout << x << " ";
        cout << "\n";
    }
}