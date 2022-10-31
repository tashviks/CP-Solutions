#include <bits/stdc++.h> 
using namespace std;
// The code is written by Tashvik Srivastava  // 
#define GODSPEED ios_base::sync_with_stdio(0);cin.tie(0); cout.tie(0);
#define TEST int t; cin>>t; for(int i = 0;i<t;i++)
#define NoTEST int t = 1; while(t--)
#define inp(v) for (int i = 0; i < n; ++i) {cin>>temp;v.push_back(temp);}
#define ll long long
#define ld long double
#define sza(x) ((int)x.size())
#define all(a) (a).begin(), (a).end()
#define pb push_back
#define popb pop_back
#define inpvec(v) for(auto &it : v) cin>>it;
#define rep(i, a, b) for (ll i = a; i < b; i++)
const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;
 
 
//first try (time taken about 15 min)
//best case complexity of O(n)
 
//to find if given sum is sum of pairs in an array 
 
//-----------------------------------------------------------------------------------------------------------    
int FindPairSum(std::vector<int> A, int N, int SUM)
{
 int i = 0;int j = N - 1;
 while (i < j) {if (A[i] + A[j] == SUM)  return 1;
       else if (A[i] + A[j] < SUM)  i++;
       else       j--;
      }
       return 0;     
}
//---------------------------------------------------------------------------------------------------------
int vecsum(std::vector<int> v , int n)
{
 int sum = 0;
 rep(i,0,n)
 {
  sum+=v[i];
 }
 return sum;
}
//--------------------------------------------------------------------------------------------------------------
vector<int> prefixsum(std::vector<int> v , int n)
{
 std::vector<int> r;
 r[0]=v[0];
 for (int i = 1; i < n; ++i)
 {
  /* code */
  r[i]=r[i-1]+v[i];
 
 }
 
 return r;
 
}
//--------------------------------------------------------------------------------------------------------------
 
void solve()
{
  string s;
  cin>>s;
 
  ll ans=0,i,n=s.length();
 
  vector<ll>prefizero(n+2,0);
 
  vector<ll>suffixone(n+2,0);
 
  for(i=1;i<=s.length();i++)
 
  prefizero[i]+=(prefizero[i-1]+(s[i-1]=='0'));
 
  for(i=n;i>=0;i--)
  {
    suffixone[i]+=(suffixone[i+1]+(s[i-1]=='1'));
  }
 
  for(i=1;i<=n;i++)
  {
    if(prefizero[i-1]==0&&suffixone[i+1]==0)
    ans++;
  }
  
  cout<<ans<<endl;
 
  
 }
 
//----------------------------------------------------------------------------------------------------------
 
  
 
 
 
 
 
 
   
int main() 
{
 GODSPEED
 
    TEST
    {
        solve();
    }
}
 
 