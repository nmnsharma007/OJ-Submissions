#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int x;
    int freq[1001];
    for(int i=0;i<1001;i++)
        freq[i] = 0;
        int count = 0;
    for(int i=0;i<n;i++)
    {
        cin >> x;
        if(freq[x] == 0)
            count++;
        freq[x]++;
    }
    sort(freq,freq+1001);
    int max_height = freq[1000];
    cout << max_height << " " << count;
}
