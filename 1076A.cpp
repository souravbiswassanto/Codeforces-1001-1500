#include <bits/stdc++.h>
using namespace std ;

#define  ll   long long
#define  pb  push_back
#define  mp  make_pair
#define  MAX  200006
#define  Max(a,b,c) max(a,max(b,c))
#define  Min(a,b,c) min(a,min(b,c))
#define  mem(a,v)   memset(a,v,sizeof(a))
#define  rep        for (int i=0;i<n;i++)
#define  Rep        for (int i=0;i<m;i++)

void fastIO (){

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.precision(20);
}

ll A[MAX];
ll B[MAX];
ll C[MAX];

ll rev (ll a,ll b){

    return a>b;
}

int main ()
{

    fastIO();
    vector<ll> V;
    set<ll>S;
    set<ll>::iterator it;

    ll a,b,c;
    ll n,m;
    ll cnt=0,cntr=0,sum=0,ans=1;
    ll p,q,r;
    ll v=1;
    ll check=0;
    ll x,y,z,pos;
    ll Max=0,Min=INT_MAX;
    string s,s1,s3,s4;

    cin>>n;

    cin>>s;
    pos=n-1;
    for (int i=1;i<n;i++){
        int value,Value;
        value=s[i]-96;
        Value=s[i-1]-96;

        if (Value>value){
            Max=Value;
            pos=i-1;
            break;
        }
    }
    for (int i=0;i<n;i++){
        if (pos==i)continue;
        cout<<s[i];
    }

    return 0;
}
