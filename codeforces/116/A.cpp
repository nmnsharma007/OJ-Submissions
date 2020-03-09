#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n],b[n];
    for(int i = 0; i < n;i++)
    {
        cin >> a[i] >> b[i];
    }
    int cur_count = 0;
    int max_count = 0;
    for(int i = 0; i < n-1;i++)
    {
        cur_count  = cur_count - a[i] + b[i];
        if(cur_count >= max_count)
            max_count = cur_count;
    }
    cout << max_count;
}
