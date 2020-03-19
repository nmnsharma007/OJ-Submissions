#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int x;
    int count = 0;
    int count1 = 0;
    int count2 = 0;
    int count3 = 0;
    int count4 = 0;
    for(int i = 0; i < n;i++)
    {
        cin >> x;
        if(x == 1)
            count1++;
        if(x == 2)
            count2++;
        if(x == 3)
            count3++;
        if(x == 4)
            count4++;
    }
    count += count4;
    count4 = 0;
    if(count1 < count3)
    {
        count += count1;
        count3 = count3 - count1;
        count1 = 0;
    }
    else
    {
        count += count3;
        count1 -= count3;
        count3 = 0;
    }
    count += (count2/2);
    count2 = count2 % 2;
    if(count1 <= 2*count2)
    {
        count += (count1/2);
        count2 -= (count1/2);
        count1 %= 2;
    }
    else
    {
        count += count2;
        count1 -= (2*count2);
        count2 = 0;
    }
    count += count3;
    count += count2;
    if(count1 >= count2)
        count1 -= count2;
    count += (count1/4);
    if(count1 % 4)
        count++;
    cout << count;
}
