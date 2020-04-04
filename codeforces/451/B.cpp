#include<bits/stdc++.h>
using namespace std;
int is_sorted(int* arr,int n)
{
    for(int i = 0; i < n-1;i++)
    {
        if(arr[i] > arr[i+1])
            return 0;
    }
    return 1;
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n;i++)
    {
        cin >> arr[i];
    }
    int flag = 0;
    int start,end;
    for(int i = 0; i < n;i++)
    {
            start = i;
            while(i < n-1 && arr[i] > arr[i+1])
            {
                flag = 1;
                i++;
            }
            end = i;
            if(flag == 1)
                break;
    }
    if(is_sorted(arr, n))
    {
        flag = 1;
        cout << "yes\n";
        cout << "1 1";
    }
    else
    {
        sort(arr+start,arr+end+1);
        for(int i = 0; i < n-1;i++)
        {
            if(arr[i] > arr[i+1])
            {
                flag = 0;
                break;
            }
        }
        if(flag)
        {
            cout << "yes" << "\n";
            cout << start+1 << " " << end+1;
        }
        else
            cout << "no";
    }
}
