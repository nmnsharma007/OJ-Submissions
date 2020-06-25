#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> freq(200000+5);
    int arr[n];
    int flag = 1;
    for(int i=0;i<n;i++){
        cin >> arr[i];
        freq[arr[i]]++;
        if(freq[arr[i]] > 2)
            flag = 0;
    }
    if(flag == 0)
        cout << "NO\n";
    else{
        cout << "YES\n";
        vector<int> increasing;
        vector<int> decreasing;
        sort(arr,arr+n);
        //increasing.push_back(arr[0]);
        for(int i=0;i<=200000;i++){
            if(freq[i] == 2){
                increasing.push_back(i);
                decreasing.push_back(i);
            }
            else if(freq[i] == 1)
                increasing.push_back(i);
        }
        cout << (int)increasing.size() << "\n";
        for(auto x : increasing)
            cout << x << " ";
        cout << "\n";
        cout << (int)decreasing.size() << "\n";
        reverse(decreasing.begin(),decreasing.end());
        for(auto x : decreasing)
            cout << x << " ";
        cout << "\n";
    }
}