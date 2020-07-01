#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n+1];
    priority_queue<int> pq;
    for(int i=1;i<=n;i++){
        cin >> arr[i];
    }
    int store = n;
    for(int i=1;i<=n;i++){
            if(arr[i] == store){
                cout << arr[i] << " ";
            store--;
            while(!pq.empty() && pq.top() == store){
                cout << pq.top() << " ";
                pq.pop();
                store--;
            }
            cout << "\n";
        }
        else{
            pq.push(arr[i]);
            cout << "\n";
        }
    }
    while(!pq.empty()){
        cout << pq.top() << " ";
        pq.pop();
    }
}