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
 
 
//first try (time taken about 15 min)
 
void solve()
{
 int n;
  string x;
  cin >> n >> x;
  string a(n, '0'), b(n, '0');
  for (int i = 0; i < n; ++i) 
  {
   if (x[i] == '1')
    {
    a[i] = '1';
    b[i] = '0';
    for (int j = i + 1; j < n; ++j) 
    {
     b[j] = x[j];
    }
    break;
   } else 
   {
    a[i] = b[i] = '0' + (x[i] - '0') / 2;
   }
  }
  cout << a << endl << b << endl;
 
 
  }
 
 
 
 
 
 
 
 
 
   
int main() 
{
 GODSPEED
 
    TEST
    {
        solve();
    }
}
 