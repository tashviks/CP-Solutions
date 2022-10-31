#include <bits/stdc++.h> 
using namespace std;
// The code is written by Tashvik Srivastava  // 
#define GODSPEED ios_base::sync_with_stdio(0);cin.tie(0); cout.tie(0);
#define TEST int t; cin>>t; while(t--)
#define NoTEST int t = 1; while(t--)
 
#define ll long long
#define ld long double
#define sza(x) ((int)x.size())
#define all(a) (a).begin(), (a).end()
#define pb push_back
#define popb pop_back
#define rep(i, a, b) for (ll i = a; i < b; i++)
const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;
 
 
 
void solve()
{
   ll n  , x;
   cin>>n>>x;
   std::vector<ll> v; ll temp;
 
   ll odd =0;ll even=0;
 
   ll sum = 0;
   for (int i = 0; i < n; ++i)
   {
    /* code */
    cin>>temp;
    v.push_back(temp);
 
    if(temp%2==0)
     even++;
    else
     odd++;
 
   }
    ll m = min(even,x-1);
        ll d = x - m;
 
        if(d % 2 == 0){
            d++;
        }
        if(odd >= d && d <= x)
         cout<<"Yes\n";
        else 
         cout<<"No\n";
    }
 
    
int main() 
{
 
    TEST
    {
        solve();
    }
}