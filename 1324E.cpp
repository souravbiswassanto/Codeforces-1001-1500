#include <bits/stdc++.h>
using namespace std ;

#define  ll   long long
#define  pb  push_back
#define  mp  make_pair
#define  MAX  500006
#define  MAX1  10000008
#define  mem(a,v)   memset(a,v,sizeof(a))

template <typename T>
T mymax (T a,T b){return (a>b)?a:b;}
template <typename T>
T mymin (T a,T b){return (a<b)?a:b;}
template <typename T>
T myabs (T a){return (a<0)?(-1*a):a;}
template <typename T>
T mysqrt (T x){if (x == 0 | x == 1)return x;int start = 1, End = x, ans;while (start <= End){int mid = (start + End) / 2;if (mid*mid == x)return mid;if (mid*mid < x){start = mid + 1;ans = mid;}else End = mid-1;}return ans;}

void fastIO (){ios_base::sync_with_stdio(false);cin.tie(0); cout.precision(20);}

ll A[MAX];
ll B[MAX];
ll C[MAX];
vector< ll >V;
vector< ll >Ans;
vector< pair<ll,ll> >VP;
map< ll,ll >M;
vector<ll>prime;
bool mark[MAX1];
ll N=1e7,l,r,n;
void seive (){int limit = sqrt(N*1.0)+2;mark[1]=1;for (int i=4;i<=N;i+=2)mark[i]=1;prime.push_back(2);for (int i=3;i<=N;i+=2){if(!mark[i]){prime.push_back(i);if(i<=limit){for (int j=i*i;j<=N;j+=i*2)mark[j]=1;}}}}
ll resa[100000],resb[100000];
void kp(int state,ll cursum,ll h){
    if(state>n)return;
    ll a=A[state]+cursum;a%=h;
    ll b=A[state]-1+cursum;b%=h;
    kp(state+1,a,h);
    kp(state+1,b,h);
    if(a>=l&&a<=r){resa[state]=max(resa[state+1],resb[state+1])+1;}
    else resa[state]=max(resa[state+1],resb[state+1]);
    if(b>=l&&b<=r){resb[state]=max(resa[state+1],resb[state+1])+1;}
    else resb[state]=max(resb[state+1],resa[state+1]);
    cout<<resa[state+1]<<" "<<resb[state+1]<<" "<<resa[state]<<endl;

    cout<<resa[state+1]<<" "<<resb[state+1]<<" "<<resb[state]<<endl;cout<<endl;
}

int main ()
{
    fastIO();
    ll a,b,c,m,k,h,p,q;
    ll cnt=0,cntr=0,sum=0,ans=1,check=0;
    float x,y,z;
    ll Max= 0,Max1=-1e18+1;
    ll Min = 1e18;
    string s,s1,s3,s4;

    cin>>n>>h>>l>>r;

    for(int i=1;i<=n;i++)cin>>A[i];

    kp(1,0,h);
    for(int i=0;i<=100000;i++)Max=max(resa[i],Max);
    for(int i=0;i<=100000;i++)Max=max(resb[i],Max);
    cout<<Max<<endl;

    return 0;
}
