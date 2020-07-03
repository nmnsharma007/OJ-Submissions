#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i < n;i++){
        scanf("%d",&arr[i]);
    }
    sort(arr,arr+n);
    int ans = 1;
    int count = 1;
    int prev = 0;
    for(int i=1;i < n;i++){
        if(arr[i]-arr[prev] <= 5){
            count++;
            continue;
        }
        ans = max(ans,count);
        while(arr[i]-arr[prev] > 5 && prev <= i){
            prev++;
            count--;
        }
        count++;
    }
    ans = max(ans,count);
    printf("%d\n",ans);
}