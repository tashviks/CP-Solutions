// #include <bits/stdc++.h> 
// using namespace std;
// // The code is written by Tashvik Srivastava  // 
// #define GODSPEED ios_base::sync_with_stdio(0);cin.tie(0); cout.tie(0);
// #define TEST int t; cin>>t; while(t--)
// #define loop_array for(int i =0;i<(sizeof(arr)/sizeof(arr[0]));i++)
// #define ll long long
// #define ld long double
// #define sza(x) ((int)x.size())
// #define all(a) (a).begin(), (a).end()
// #define pb push_back
// #define popb pop_back
// #define rep(i, a, b) for (ll i = a; i < b; i++)
// const int MAX_N = 1e5 + 5;
// const ll MOD = 1e9 + 7;
// const ll INF = 1e9;
// const ld EPS = 1e-9;
 
 
// int main()
// {
//  TEST
//  {
//   int n ;
//   cin>>n;
 
//   std::vector<ll> a;
//   std::vector<ll> b;
//    ll x , y;
//   for (int i = 0; i < n; ++i)
//   {
//    /* code */
//    cin>>x;
//    a.push_back(x);
 
//   }
//   for (int i = 0; i < n; ++i)
//   {
//    /* code */
//    cin>>y;
//    b.push_back(y);
//   }
//     ll diff = 0; 
//     bool flag = true;
 
//    if(a[n-1]>=b[n-1])
//    {
//     diff = a[n-1]-b[n-1];
//    }
//    else
//    {
//     flag = false;
//    }
   
//    if(flag==true)
//    { 
//     for (int i = 0; i < n; ++i)
//     {
//      /* code */
//      if(a[i]<b[i])
//      {
//        flag = false;
//        break;
//      }
//      else if((a[i]-b[i])!=diff && (a[i]!=0 && b[i]!=0)) 
//      {
//       flag = false; 
//       break;
//      }
 
//   }
 
 
//   if(flag==true)
//    cout<<"YES"<<endl;
//   else
//    cout<<"NO"<<endl;
 
//  }
 
//  }
// }
 
 
 
 
 
#include <bits/stdc++.h> 
using namespace std;
// The code is written by Tashvik Srivastava  // 
#define GODSPEED ios_base::sync_with_stdio(0);cin.tie(0); cout.tie(0);
#define TEST  cin>>t; while(t--)
#define loop_array for(int i =0;i<(sizeof(arr)/sizeof(arr[0]));i++)
#define ll long long
#define ld long double
#define sza(x) ((int)x.size())
#define all(a) (a).begin(), (a).end()
#define pb push_back
#define popb pop_back
#define forn(i, a, b) for (ll i = a; i < b; i++)
#define endl '\n'
const int MAX_N = 1e5 + 5;
const ll inf = 1e9 + 7;
const ll  MOD = 1e9;
const ld EPS = 1e-9;
 
 
void compute()
{
 ll n; 
  cin >> n; 
  ll a = n; 
  vector<ll>v; 
  set<ll>s; 
  map<ll, ll>m; 
  for (ll i = 0; i < n; i++) { 
    ll x; 
    cin >> x; 
    v.push_back(x); 
    s.insert(x); 
    m[x] += 1; 
  } 
  v.assign(s.begin(), s.end()); 
  for (ll i = 0; i < v.size(); i++) { 
    n -= (m[v[i]] - 1); 
  } 
  if ((a - n) % 2 == 1) 
    n -= 1; 
  cout << n<<endl;
}
 
 
 
int main(){
 int t;
 // t = 1;
 TEST
 {
compute();
}
 
    
}
 