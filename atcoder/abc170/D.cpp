#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin >> arr[i];
    vector<bool> visited(n,false);
    set<int> s;
    sort(arr,arr+n);
    for(int i=0;i<n;i++){
        if(i && arr[i] == arr[i-1]){
            visited[i] = true;
            visited[i-1] = true;
            
        }
        if(!i && arr[i] == arr[i+1]){
            visited[i] = true;
            visited[i+1] = true;
        }
        if(s.find(arr[i]) != s.end()){
            visited[i] = true;
            continue;
        }
        s.insert(arr[i]);
        for(int j=2*arr[i];j<=1000000;j+=arr[i]){
            s.insert(j);
        }
    }
    int ans = 0;
    for(int i=0;i<n;i++){
        if(!visited[i])
            ans++;
    }
    cout << ans << "\n";
}