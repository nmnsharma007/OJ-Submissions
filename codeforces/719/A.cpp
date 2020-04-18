#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n+1];
    for(int i = 1; i <= n;i++)
    {
        cin >> arr[i];
    }
    if(n == 1)
    {
        if(arr[n] == 15 )
            cout << "DOWN";
        else if(arr[n] == 0)
        {
            cout << "UP";
        }
        else
        {
            
            cout << "-1";
        }
        
    }
    else
    {
        if(arr[n] < 15 && arr[n-1] > arr[n] && arr[n] != 0)
            cout << "DOWN";
        else if(arr[n] < 15 && arr[n-1] < arr[n] && arr[n] != 0)
            cout << "UP";
        else if(arr[n] == 15)
            cout << "DOWN";
            else if(arr[n] == 0)
            {
                cout << "UP";
            }
            
    }
    
}