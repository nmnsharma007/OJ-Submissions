#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v;
    while(n)
    {
        int temp = n;
        int num = 0;
        int m = 1;
        while(temp)
        {
            int rem = temp%10;
            if(rem)
                rem = 1;
            num = num + m*rem;
            temp /= 10;
            m *= 10;
        }
        v.push_back(num);
        n = n-num;
    }
    cout << v.size() << "\n";
    for(int x : v)
        cout << x << " ";
}
