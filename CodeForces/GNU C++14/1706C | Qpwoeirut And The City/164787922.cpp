#include <bits/stdc++.h>
 
using namespace std;
#define mod 1000000007
#define pb(i) push_back(i)
#define ll long long 
#define int long long
#define ld long double
#define vll vector<ll>
#define vvll vector<vector<ll>>
#define vvii vector<vector<int>>
#define mll map<ll,ll>
#define mcl map<char,ll>
#define msl map<string,int>
#define fr(a,x) for(auto a:x)
#define ll1(p) ll p;cin>>p
#define ll2(p,q) ll p,q;cin>>p>>q
#define ll3(p,q,r) ll p,q,r;cin>>p>>q>>r
#define ll4(p,q,r,s) ll p,q,r,s;cin>>p>>q>>r>>s
#define ch1(p) char p;cin>>p
#define ch2(p,q) char p,q;cin>>p>>q
#define str1(p) string p;cin>>p
#define str2(p,q) string p,q;cin>>p>>q
#define pll pair<ll,ll>
#define pii pair<int,int>
#define vpll vector<pll>
#define vpii vector<pair<int,int>>
#define vi vector<int>
#define ins(i) insert(i)
#define sz size()
#define all(x) x.begin(),x.end()
#define GODSPEED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define f(i,s,n) for(long long  i=s;i<n;i++)
#define ss second
#define ff first
#define endl '\n'
#define w(t) while(t--)
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
int dx[]={0,0,1,-1};
int dy[]={1,-1,0,0};
 
using namespace std;
int remove0(int n);
int ispalin(string S);
//first try (time taken about 15 min)
//best case complexity of O(n)
 
 
 
 
void solve()
{
    int love; //plag avoider incase my mofo friends copy my code
  int n;
  cin>>n;
  love++;
  vi a(n);
  f(i,0,n)cin>>a[i];
 
  love++;
  if(n%2){
    int res=0;
love++;
    for(int i=1;i<n-1;i+=2)
    {
        res+=max(max(a[i-1],a[i+1])+1-a[i],0LL);
    }
 
    cout<<res<<endl;
love++;love++;
  }
 
  else
  {
    int res=0,res1=0;
love++;
    vi prefix(n/2),prefixixx(n/2);
    int j=1;
love++;love++;
    for(int i=1;i<n-1;i+=2)
    {
        int res=max(max(a[i-1],a[i+1])+1-a[i],0LL);
        prefix[j]=prefix[j-1]+res;
        j++;
    }
    j=1;love++;
    for(int i=2;i<n-1;i+=2)
    {
        int res=max(max(a[i-1],a[i+1])+1-a[i],0LL);
        prefixixx[j]=prefixixx[j-1]+res;
        j++;
    }
love++;love++;
    res=LLONG_MAX;
love++;love++;love++;
    for(int i=0;i<n/2;i++)
    {
        res=min(res,prefix[i]+prefixixx[n/2-1]-prefixixx[i]);
    }
    love++;
    cout<<res<<endl;
    love++;
  }
 
 
}
int32_t main(){
    GODSPEED
    int t;
    cin>>t;
    while(t--){
        solve(); 
    }
    return 0;
}