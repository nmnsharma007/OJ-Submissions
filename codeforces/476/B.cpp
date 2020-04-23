#include<bits/stdc++.h>
using namespace std;
int fact(int n)
{
    if(n<=1)
        return 1;
    return n*fact(n-1);
}
int main()
{
    string s1,s2;
    cin >> s1;
    cin >> s2;
    int count1 = 0;
    int count2 = 0;
    int count3 = 0;
    int count4 = 0;
    int count = 0;
    for(int i=0;i<s1.length();i++)
    {
        if(s1[i] == '+')
            count1++;
        else
            count2++;
    }
    for(int i=0;i<s2.length();i++)
    {
        if(s2[i] == '+')
            count3++;
        if(s2[i] == '-')
            count4++;
            if(s2[i] == '?')
                count++;
    }
    count3 = abs(count3 - count1);
    count4 = abs(count4-count2);
    float ans;
    int temp = fact(count3+count4);
    ans = temp/(fact(count3)*fact(count4));
    ans = ans/pow(2.0,count);
    if(count == count3+count4)
    printf("%.9f",ans);
    else
        cout << "0.000000000";
}
