#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
typedef long long ll ;
typedef unsigned long long ull;
typedef vector<ll> vl;
typedef vector<vector<ll>> vvl;
#define speed cin.tie(0);cout.tie(0);ios_base::sync_with_stdio(0);
/*  Abbrevations  */
#define ff first
#define ss second
#define mp make_pair
#define line cout<<endl;
#define pb push_back
// loops
#define forin(arr,n) for(ll i=0;i<n;i++) cin>>arr[i];
// Some print
#define no cout<<"NO"<<endl;
#define yes cout<<"YES"<<endl;
// sort
#define all(V) (V).begin(),(V).end()
#define srt(V) sort(all(V))
#define srtGreat(V) sort(all(V),greater<ll>())
// some extra
#define printv(v) for(ll i=0;i<ll(v.size());i++){cout<<v[i]<<" ";} cout<<endl;
#define precision(x) cout<<fixed<<setprecision(x);
#define sz(V) ll(V.size())
const ll INF=1e18;
const ll mod1=1e9+7;
const ll mod2=998244353;
 
ll compute(){
    ll n,q;
    cin>>n>>q;
    vl v(n);
    vector<ll> prefix(n+1,0);
    for(ll i=0;i<n;i++){
        cin>>v[i];
    }
    srt(v);
    for(ll i=0;i<n;i++){
        prefix[i+1]=prefix[i]+v[i];
    }
    while(q--){
        ll x,y;
        cin>>x>>y;
        ll ans=0;
        ans=prefix[n-x+y]-prefix[n-x];
        cout<<ans<<endl;
    } 
    return 0;
}
int main(){
    speed;
    
    
    ll TestCase=1;
    // cin>>TestCase;
    while(TestCase--){
        compute();
    }
}