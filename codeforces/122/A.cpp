#include<iostream>
using namespace std;
int is_lucky(int i)
{
    int flag,rem;
    flag = 1;
    while(i)
    {
        rem = i % 10;
        if(rem != 4 && rem != 7)
        {
            flag = 0;
            break;
        }
            i /= 10;
    }
    return flag;
}
int main()
{
    int n;
    cin >> n;
    int flag;
    for(int i = 1;i <= n;i++)
    {
        if(n % i == 0)
        {
            flag = is_lucky(i);
            if(flag)
                break;
        }
    }
    if(flag)
        cout << "YES";
    else
        cout << "NO";
}
