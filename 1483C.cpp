
// Problem: C. Fence Painting
// Contest: Codeforces - Codeforces Round #699 (Div. 2)
// URL: https://codeforces.com/contest/1481/problem/C
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
    cin>>t;
    loop:
    while(t--){
        cin>>n >> m;
        set<int> S[n + 3];
        int match[n + 3], occ[n + 3], occ1[n + 3], D[ n + 3];
        vector<int> Ans(m + 3, 0);
        for (int i = 1; i <= n + 1; i++){
            A[i] = B [i] = C[i] = 0; D[i] = 0;
            occ[i] = occ1[i] = match[i] = 0;
            S[i].clear();
        }
        for (int i = 1; i <= n; i++){
            cin >> A[i];
        }
        for(int i = 1; i <= n; i++){
            cin >> B[i];
            if(A[i] != B[i]){
                occ[B[i]]++;
                S[B[i]].insert(i);
            }
            else {
                match[B[i]] = i;
            }
            D[B[i]]++;
        }
        for (int i = 1; i <= m; i++){
            cin >> C[i];
            occ1[C[i]]++;
        }
        for (int i = 1; i <= n; i++){
            if(occ[i] > occ1[i]){
                cout << "NO" << endl; goto loop;
            }
        }
        if(D[C[m]] == 0){
            cout <<"NO" << endl; goto loop;
        }
        for (int i = 1; i <= m; i++){
            if(occ[C[i]]){
                auto it = S[C[i]].begin();
                Ans[i] = *it;
                if(S[C[i]].size() > 1)S[C[i]].erase(it);
            }
        }
        for (int i = 1; i <= m; i++){
            if(D[C[i]] and Ans[i] == 0){
                Ans[i] = match[C[i]];
            }
        }
        for (int i = 1; i < m; i++){
            if(!Ans[i]){
                Ans[i] = Ans[m];
            }
        }
        cout << "YES" << endl;
        for (int i = 1; i <= m; i++){
            cout << Ans[i] <<" ";
        }
        cout << endl;

    }

    return 0;
}
