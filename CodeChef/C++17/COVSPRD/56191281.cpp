#include <bits/stdc++.h>
#include<stdlib.h>
#include<sstream>
using namespace std;
// The code is written by Tashvik Srivastava  // 
#define GODSPEED ios_base::sync_with_stdio(0);cin.tie(0); cout.tie(0);
#define TEST int t; cin>>t; while(t--)
#define loop for(int i =0;i<(sizeof(arr)/sizeof(arr[0]));i++)
#define ll long long
#define ld long double
#define all(a) (a).begin(), (a).end()
#define sz(x) ((int)x.size())
#define pb push_back
const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

int main()
{
GODSPEED
TEST
{
  ll n , k;
  cin>>n>>k;
  ll num = 1;
  for(ll i =1;i<=k;i++)
  {
    if(num>=n)
      break;
    else if(i>=1 and i<=10)
      num = num*2;
    else if(i>=11)
      num = num*3;    

  }
  if(num>=n)
    cout<<n<<endl;
  else
    cout<<num<<endl;
}
}

