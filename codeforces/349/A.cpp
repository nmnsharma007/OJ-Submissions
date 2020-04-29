#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin >> arr[i];
    int flag = 1;
    int count_of_25 = 0;
    int count_of_50 = 0;
    if(arr[0] != 25)
        flag = 0;
    else
    {
        count_of_25++;
        for(int i=1;i<n;i++)
        {
            if(arr[i] == 25)
                count_of_25++;
            else if(arr[i] == 50)
            {
                if(count_of_25)
                {
                    count_of_25--;
                    count_of_50++;
                }
                else
                {
                    flag = 0;
                    break;
                }
            }
            else if(arr[i] == 100)
            {
                if(count_of_50 && count_of_25)
                {
                    count_of_25--;
                    count_of_50--;
                }
                else if(count_of_25 >= 3)
                    count_of_25 -= 3;
                else
                {
                    flag = 0;
                    break;
                }
                
            }
        }
    }
        if(flag)
            cout << "YES";
        else
            cout << "NO";
}