#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s,v1,v2,t1,t2;
    cin >> s >> v1 >> v2 >> t1 >> t2;
    int dif = (v1*s+2*t1) - (v2*s+2*t2);
    if(dif<0)
        cout << "First";
    else if(dif>0)
        cout << "Second";
    else
        cout << "Friendship";
}