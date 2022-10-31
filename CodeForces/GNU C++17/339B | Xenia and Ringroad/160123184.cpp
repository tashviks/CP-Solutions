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
 
  // ll n , m;
  // cin>>n>>m;
  // std::vector<int> v;
  // int x;
  // for (int i = 0; i < m; ++i)
  // {
  //  cin>>x;
  //  v.push_back(x); 
  // }
  // int curr = 1;
  // int sum = 0;
  // for(int i = 0;i<m;i++)
  // {
  //   if(curr<v[i])
  //   {
  //     sum = sum+abs(v[i]-curr);
  //     curr = v[i];
  //   }
  //   else if(curr>v[i])
  //   {
  //     sum = sum + abs(n-curr+v[i]);
  //     curr = v[i];
  //   }
   
  // }
  // cout<<sum<<endl;
  int n, m;
   cin>>n>>m;
 
    int ini = 1;
    long long  ans = 0;
    for(int i=0; i<m; i++)
    {
        int curr;
        cin>>curr;
        if(curr >= ini)
            ans += curr - ini;
        else
            ans += n - (ini - curr);
        ini = curr;
    }
 
    cout << ans << endl;
 
}
 
 