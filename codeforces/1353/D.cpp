#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[n+1];
        for(int i=0;i<=n;i++)
            arr[i] = 0;
        priority_queue<pair<int,pair<int,int>>> pq;
        pq.push(make_pair(n,make_pair(-1,-n)));
        int k=1;
        while(!pq.empty()){
            pair<int,pair<int,int> > temp = pq.top();
            pq.pop();
            int left = -temp.second.first;
            int right = -temp.second.second;
            int mid = (left+right)/2;
            arr[mid] = k++;
            if(left == right)
                continue;
            if(left < mid)
                pq.push({mid-left,{-left,-(mid-1)}});
            if(right > mid)
                pq.push({right-mid,{-(mid+1),-right}});
        }
        for(int i=1;i<=n;i++)
            cout << arr[i] << " ";
        cout << "\n";
    }
}