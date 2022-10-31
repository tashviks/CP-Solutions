#include <bits/stdc++.h> 
using namespace std;
// The code is written by Tashvik Srivastava  // 
#define GODSPEED ios_base::sync_with_stdio(0);cin.tie(0); cout.tie(0);
#define TEST int t; cin>>t; while(t--)
#define loop_array for(int i =0;i<(sizeof(arr)/sizeof(arr[0]));i++)
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
 
 
int main()
{
 TEST
 {
  ll n;
  cin>>n;
 
  ll f = 2 , s = 1 , t = 0;
   n=n-3;
  f = f+n/3;
  s=s+n/3;
  t = t+n/3;
 
  n = n%3;
 
  
 
  if(n==1)
   f=f+1;
 
  else if(n==2)
  {
   f=f+1;
   s=s+1;
  }
  else if(n==3)
  {
   f+=1;
   s+=1;
   t+=1;
  }
 
  cout<<s<<" "<<f<<" "<<t<<" "<<endl;
 
 }
}
 
 
 
 
 