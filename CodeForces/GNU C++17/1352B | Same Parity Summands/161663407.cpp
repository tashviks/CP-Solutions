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
 int n, k;
  cin >> n >> k;
  
  int n1 = n - (k - 1);
  if (n1 > 0 && n1 % 2 == 1)
   {
   cout << "YES" << endl;
 
   for (int i = 0; i < k - 1; ++i)
    cout << "1 ";
   
    cout << n1 << endl;
   
    return;
  }
 
  int n2 = n - 2 * (k - 1);
  if (n2 > 0 && n2 % 2 == 0) 
  {
   cout << "YES" << endl;
 
   for (int i = 0; i < k - 1; ++i) 
    cout << "2 ";
   
    cout << n2 << endl;
   
    return;
  }
  
  cout << "NO" << endl;
 }
 
 
 
 
   
int main() 
{
 
    TEST
    {
        solve();
    }
}
 