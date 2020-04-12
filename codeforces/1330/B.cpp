#include<iostream>
using namespace std;
const int SIZE = 2000000;
int ans[SIZE][2];
int judge(int* arr,int n)
{
    int used[SIZE+1];
    for(int i = 1; i <= n;i++)
    {
        used[i] = 0;
    }
    for(int i = 0;i < n;i++)
    {
        used[arr[i]] = 1;
    }
    for(int i = 1; i <= n;i++)
    {
        if(!used[i])
            return 0;
    }
    return 1;
}
int main()
{
    int t,n;
    cin >> t;
    while(t--)
    {
        cin >> n;
        int arr[n];
        int max = 0;
        int ans_count = 0;
        for(int i = 0;i < n;i++)
        {
            cin >> arr[i];
            if(arr[i] > max)
                max = arr[i];
        }
        bool flag1 = false;
        bool flag2 = false;
        if(judge(arr,max) && judge(arr+max,n-max))
            flag1 = true;
        if(judge(arr,n-max) && judge(arr+n-max,max) && max*2 != n)
            flag2 = true;
        if(flag1)
        {
                ans[ans_count][0] = max;
                ans[ans_count++][1] = n-max;
        }
        if(flag2)
        {
                ans[ans_count][0] = n-max;
                ans[ans_count++][1] = max;
        }
        cout << ans_count << "\n";
        for(int i = 0;i < ans_count;i++)
        {
            cout << ans[i][0] << " " << ans[i][1] << "\n";
        }
    }
}
