#include <bits/stdc++.h> 
using namespace std;
// The code is written by Tashvik Srivastava  // 
#define GODSPEED ios_base::sync_with_stdio(0);cin.tie(0); cout.tie(0);
#define TEST int t; cin>>t; while(t--)
#define NoTEST int t = 1; while(t--)
#define inp(v) for (int i = 0; i < n; ++i) {cin>>temp;v.push_back(temp);}
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
 
int temp;
 
 
void solve()
{
 int y , w;
    cin>>y>>w;
   int m =7- max(y , w);
   switch (m)
   {
       case 1 : cout<<"1/6"; break;
       case 2 : cout<<"1/3"; break;
       case 3 : cout<<"1/2"; break;
       case 4 : cout<<"2/3"; break;
       case 5 : cout<<"5/6"; break;
       case 6 : cout<<"1/1"; break ;
       
   }
   return ;
}
   
 
   
int main() 
{
 
    NoTEST
    {
        solve();
    }
}