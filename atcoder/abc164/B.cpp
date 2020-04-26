#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    int count = 0,count1 = 0;
    while(a > 0)
    {
        a -= d;
        count++;
    }
    while(c>0)
    {
        c -= b;
        count1++;
    }
    if(count>=count1)
        cout << "Yes";
    else
    {
        cout << "No";
    }
    
}