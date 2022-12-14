
// Problem: B. Vova and Trophies
// Contest: Codeforces - Educational Codeforces Round 55 (Rated for Div. 2)
// URL: https://codeforces.com/contest/1082/problem/B
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include <bits/stdc++.h>
#pragma GCC diagnostic ignored "-Wunused-variable"
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable" 
//#pragma GCC diagnostic ignored "-Wformat"

using namespace std ;

#define   Pi     2*acos(0.0)
#define   LINF   1LL<<62
#define   ll     long long
#define   ull    unsigned long long
#define   pb     push_back
#define   mp     make_pair
#define   MAX    500006
#define   MAX1   10000008
#define   mem(a,v)   memset(a,v,sizeof(a))
#define   all(x) x.begin(),x.end()
#define   lcm(a, b)        ((a)*((b)/__gcd(a,b)))
#define yes   cout<<"YES"<<endl
#define no   cout<<"NO"<<endl
#define buga  cout<<1<<endl
#define bugb  cout<<2<<endl
#define bugc  cout<<3<<endl
#define bugd  cout<<4<<endl
#define buge  cout<<5<<endl

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
ll N=1e7;
void seive (){int limit = sqrt(N*1.0)+2;mark[1]=1;for (int i=4;i<=N;i+=2)mark[i]=1;prime.push_back(2);for (int i=3;i<=N;i+=2){if(!mark[i]){prime.push_back(i);if(i<=limit){for (int j=i*i;j<=N;j+=i*2)mark[j]=1;}}}}
/*
ll sti(string a,int base=10)
{
	ll k=0;
	for (int i=0;i<(int)a.size();++i)
	{
		k*=base;
		k+=a[i]-'0';
	}
	return k;
}
 
/*
/*
ll bin_pow(ll o, ll s) {
    if (s == 0) return 1;
    if (s == 1) return o % mod;
    ll d = bin_pow(o, s/2);
    d = (d * 1ll * d) % mod;
    if (s % 2 == 1)
        d = (d * 1ll * o) % mod;
    return d;
}
*/

int main ()
{
    fastIO();
    ll a,b,c,d,n,m,k,l,p,q,r,t,x,y;
    ll cnt=0,cntr=0,sum=0,ans=1,check=0;
    ll Max= 0,Max1=-1e18+1,Min=LINF;
    string s,s1,s3,s4;

    //cin>>n;
    t = 1;

    while(t--){
        cin>>n;
        cin >> s;
        cntr = 0;
        for(int i = 0; i < n; i++){
            if(s[i] == 'S')cntr++;
        }
        if(cntr == 0){
            cout << n << endl;continue;
        }
        if(cntr == 1){
            cout << n - 1 << endl; continue;
        }
        if(cntr == n){
            cout << 0 << endl;continue;
        }
        cntr = 0;
        ll fp = n + 1, lp = -1;
        for (int i = 0; i < n ;i++){
            if (s[i] =='S'){
                A[i] = cntr; cntr = 0;
            }
            else cntr++;
        }
        cntr = 0;
        for (int i = n - 1 ;i >= 0; i--){
            if(s[i] =='S'){
                B[i] = cntr; cntr = 0;
            }
            else cntr++;
        }
        for(int i = 0; i < n ;i++){
            if (s[i] == 'G'){
                fp = i; break;
            }
        }
        for (int i = n - 1; i >= 0; i--){
            if(s[i] == 'G'){
                lp = i; break;
            }
        }
        for(int i = 0; i < n; i++){
            if(s[i] == 'S'){
                a = A[i] + B[i];
                b = i - A[i];
                c = i + B[i];
                if(b > fp or c < lp){
                    a++;
                }
                Max = max(Max, a);
            }
        }
        cout << Max << endl;
    }

    return 0;
}
