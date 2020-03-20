#include<iostream>
using namespace std;
int main()
{
    int n;
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    int arr[n];
    for(int i = 0; i < n;i++)
    {
        cin >> arr[i];
    }
    int length = n;
    int cur_len = 0;
    int max_len = 0;
    while(length > 0)
    {
        int i = 0;
        int b[n];
        while(i+length <= n)
        {
            for(int j = 0; j < n;j++)
            {
                b[j] = arr[j];// duplicating the array
            }
            cur_len = 0;
            for(int j = i; j < i+length;j++)
            {
                if(b[j] == 0)
                    b[j] = 1;
                else
                    b[j] = 0;
            }
            for(int k = 0; k < n;k++)
            {
                if(b[k] == 1)
                    cur_len++;//counting the number of 1's
            }
            if(cur_len >= max_len)
                max_len = cur_len;//getting max number of 1
            i++;
        }
        length--;
    }
    cout << max_len;
}
