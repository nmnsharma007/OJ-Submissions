#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin >> t;
    while(t--)
    {
        cin >> n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin >> arr[i];
        int left = 0;
        int right = n-1;
        int flag = 0;
        int cura = 0;
        int preva = 0;
        int curb = 0;
        int prevb = 0;
        int a = 0;
        int b = 0;
        int count = 0;
        while(left <= right)
        {
            if(count%2==0)
            {
                cura = 0;
                while(cura <= prevb && left <= right)
                {
                    cura += arr[left];
                    left++;
                }
                a += cura;
                preva = cura;
            }
            else
            {
                curb = 0;
                while(curb <= preva && left <= right)
                {
                    curb += arr[right];
                    right--;
                }
                b += curb;
                prevb = curb;
            }
            count++;
        }
        cout << count << " " << a << " " << b << "\n";
    }
}