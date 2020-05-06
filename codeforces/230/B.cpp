#include<bits/stdc++.h>
using namespace std;
int is_prime(long long int n)
{
    if(n<=1)
        return 0;
    if(n==2 || n==3)
        return 1;
    if(n%2==0||n%3==0)
        return 0;
    for(int i=5;i*i<=n;i=i+6)
    {
        if(n%i==0 || n%(i+2)==0)
            return 0;
    }
    return 1;
}
int main()
{
    int n;
    cin >> n;
    long long int arr[n];
    for(int i=0;i<n;i++)
        cin >> arr[i];
    for(int i=0;i<n;i++)
    {
        long long int temp = arr[i];
        long long int root = sqrt(temp);
        if(root*root == temp)
        {
            if(is_prime(root))
                cout << "YES\n";
            else
                cout << "NO\n";
        } 
        else
            cout << "NO\n";
    }
}