#include<bits/stdc++.h>
using namespace std;
#define ll long long  int
int main()
{
    ll q;
    cin >> q;
    while(q--)
    {
        ll arr[3];
        for(int i=0;i<3;i++)
            cin >> arr[i];
        sort(arr,arr+3);
        ll  length = 2*(arr[2] - arr[0]);
        if(length <= 2)
            cout << "0\n";
        else
            cout << length - 4 << "\n";
    }
}
