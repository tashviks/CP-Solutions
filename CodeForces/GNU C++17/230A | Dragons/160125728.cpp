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
  int n , s;
  cin>>s>>n;
 vector<pair<int , int>> a;
 int x , y;
 for(int i = 0;i<n;i++)
 {
  cin>>x>>y;
  a.push_back(make_pair(x,y));
 }
 sort(a.begin() , a.end());
 int count = 0;
 for(int i =0;i<n;i++)
 {
  if(s>a[i].first)
    s = s+a[i].second;
  else
  {
    count--;
    break;
  }
 }
 if(count==0)
  cout<<"YES"<<endl;
else
  cout<<"NO"<<endl;
 
  }