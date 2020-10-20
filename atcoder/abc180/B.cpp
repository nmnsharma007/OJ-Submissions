#include <bits/stdc++.h>
typedef long long int ll;
#define Need_For_Speed(activated) ios_base::sync_with_stdio(false);cin.tie(0);//cout.tie(0);system("cls");
#define MOD 1000000007
#define en '\n'
#define sp " "

using namespace std;



int main()
{
    
    Need_For_Speed(activated);

    ll n;
    cin >> n;
    ll i, md = 0, cd = INT_MIN;
    long double ed = 0;
    ll x;

    for(i = 0; i < n; i++) {
        cin >> x;
        md += abs(x);
        cd = max(cd, abs(x));
        ed += (abs(x) * abs(x)); //ed += (abs(x) * abs(x) * 1LL); this is no good
    }

    ed = sqrt(ed);

    cout<<md<<en;
    cout<<fixed<<setprecision(15)<<ed<<en;
    cout<<cd<<en;

    

    return 0;
}
