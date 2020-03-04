#include<iostream>
using namespace std;
struct force
{
    int x,y,z;
};
int main()
{
    int n;
    cin >> n;
    struct force f[n];
    for(int i = 0; i < n;i++)
    {
        cin >> f[i].x >> f[i].y >> f[i].z;
    }
    int sum1 = 0;
    int sum2 = 0;
    int sum3 = 0;
    for(int i = 0; i < n;i++)
    {
        sum1 += f[i].x;
        sum2 += f[i].y;
        sum3 += f[i].z;
    }
    if(sum1 || sum2 || sum3)
        cout << "NO";
    else
        cout << "YES";
}
