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
int n,t;
 
 
void solve()
{
   int n1 , n2;
   cin>>n1;
    int x;
   std::vector<int> v;
   for (int i = 0; i < n1; ++i)
   {
    /* code */
    cin>>x;
    v.push_back(x);
 
   }
   
 
    cin>>n2;
    std::vector<int> v1;
    for (int i = 0; i < n2; ++i)
    {
     /* code */
     cin>>x;
     v1.push_back(x);
    }
 
    sort(v.begin(), v.end());
    sort(v1.begin(), v1.end());
     int count = 0;
 
    for(int i = 0;i<n1;i++)
    {
     for(int j =0;j<n2;j++)
     {
      if(v[i]==v1[j] || abs(v[i]-v1[j])==1)
      {
       count++;
       v[i] = -10;
       v1[j]=-3;
 
 
      }
 
     }
    }
 
    cout<<count<<endl;return;
    
}
int main() {
 
    NoTEST
    {
        solve();
    }
}