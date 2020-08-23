
#include<bits/stdc++.h>
using namespace std;
#define ll                          long long
#define in(a)                       ll a; cin>>a;
#define in2(a,b)                    ll a,b; cin>>a>>b;
#define in3(a,b,c)                  ll a,b,c; cin>>a>>b>>c;
#define in4(a,b,c,d)                ll a,b,c,d; cin>>a>>b>>c>>d;
#define in5(a,b,c,d,e)              ll a,b,c,d,e; cin>>a>>b>>c>>d>>e;
#define lelo(b)                     for(auto &i:b)cin>>i;
#define ff                          first
#define ss                          second
#define call(v)                     v.begin(),v.end()
#define rall(v)                     v.rbegin(),v.rend()
#define show(x)                     for(auto t:x)cout<<t<<" ";
#define pb                          push_back
#define bhar(s,v)                   memset(s,v,sizeof(s))
#define endl                        "\n"                       
#define ce(x)                       cout<<x<<"\n";
#define nl                          cout<<endl;
#define jaldi                       ios_base::sync_with_stdio(false);cin.tie(NULL);
#define dekh_lo                     ce("dekh_lo");
#define sz(x)                       (ll)x.size()
#define re                          return

typedef pair<ll,ll> pii;
typedef vector<pii> vii;
typedef vector<ll> vi;

const ll mod=1e9+7;
const ll N=4e5+5;

void solve(){
    in3(h,w,m);

    ll s=m;
    vii cor;
    while(s--){
        in2(x,y);
        cor.pb({x,y});
    }

    vi row(h+1,0),col(w+1,0);
    map<pii,bool> hash;

    for(ll i=0;i<sz(cor);i++){
        row[cor[i].ff]++;
        col[cor[i].ss]++;
        hash[{cor[i].ff,cor[i].ss}]=1;
    }

    ll maxi1=-1e9;
    vi ind1;
    for(ll i=1;i<=h;i++){
        if(row[i]>maxi1){
            maxi1=row[i];
        }
    }

    for(ll i=1;i<=h;i++){
        if(row[i]==maxi1){
            ind1.pb(i);
        }
    }

    ll maxi2=-1e9;
    vi ind2;
    for(ll i=1;i<=w;i++){
        if(col[i]>maxi2){
            maxi2=col[i];
        }
    }

    for(ll i=1;i<=w;i++){
        if(col[i]==maxi2){
            ind2.pb(i);
        }
    }

    bool f=0;
    for(auto j:ind1){
        for(auto i:ind2){
            if(!hash[{j,i}]){
                f=1;
              	break;
            }
        }   
    }
   

    ll ans=maxi1+maxi2-(f==0);
    ce(ans);
   
}

int32_t main(){
    // jaldi
    ll t; 
    // cin>>t;
    t=1;     
    while(t--){
        solve();
    }
} 
