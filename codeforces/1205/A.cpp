#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if(n&1){
        int arr[2*n+1];
        int k=1;
        int cur = 1;
        int next = cur+n;
        for(int i=1;i<=n;i++){
            arr[cur] = k;
            k++;
            arr[next] = k;
            k++;
            int temp = next;
            next = cur+1;
            cur = temp+1;
        }
        cout << "YES\n";
        for(int i=1;i<=2*n;i++)
            cout << arr[i] << " ";
    }
    else
        cout << "NO\n";
}