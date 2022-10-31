#include <bits/stdc++.h>
using namespace std;
// The code is written by Tashvik Srivastava  // 
#define GODSPEED ios_base::sync_with_stdio(0);cin.tie(0); cout.tie(0);
#define TEST int t; cin>>t; while(t--)
#define loop1 for(int i =0;i<(sizeof(arr)/sizeof(arr[0]));i++)
#define ll long long
#define ld long double
#define sza(x) ((int)x.size())
#define all(a) (a).begin(), (a).end()
#define pb push_back
#define popb pop_back
 
const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;
 
int main()
{
  GODSPEED
  TEST
  {
    int n,k;
    cin>>n>>k;
    if(k>ceil((float)n/2))
     {
        cout<<"-1"<<endl;
        
      }
      else
      {
    for(ll i=0;i<n;i++) 
    {
        for(ll j=0;j<n;j++) 
        if(i==j and i%2==0 and k>0)
        cout<<"R",k--;
        else
        cout<<".";
        cout<<endl;
  
      }}
    }
  }