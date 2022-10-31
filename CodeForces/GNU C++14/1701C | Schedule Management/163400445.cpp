 
#include <bits/stdc++.h> 
using namespace std;
//------------------ The code is written by Tashvik Srivastava ------------------// 
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
#define forn(i, x, n) for (ll i = x; i < n; i++)
#define fornb(i, n, x) for (ll i = n; i >=x; i--)
const int  MAX = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;
 
int remove0(int n);
int ispalin(string S);
//first try (time taken about 15 min)
//best case complexity of O(n)
//------------------------------------------------------------------------------------------------------------------
//to find if given sum is sum of pairs in an array     
int FindPairSum(std::vector<int> A, int N, int SUM)
{
 int i = 0;int j = N - 1;
 while (i < j) {if (A[i] + A[j] == SUM)  return 1;
       else if (A[i] + A[j] < SUM)  i++;
       else       j--;
      }
       return 0;     
}
//-------------------------------------------------------------------------------------------------------------------
//to find sum of all vectors in an array
int vecsum(std::vector<int> v , int n)
{
 int sum = 0;
 forn(i,0,n)
 {
  sum+=v[i];
 }
 return sum;
}
//------------------------------------------------------------------------------------------------------------------
//prefix sum vector
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
//------------------------------------------------------------------------------------------------------------------
//returns gcd
long long gcd(long long int a, long long int b)
{
  if (b == 0)
    return a;
  return gcd(b, a % b);
}
//------------------------------------------------------------------------------------------------------------------
//returns lcm
long long lcm(int a, int b)
{
    return (a / gcd(a, b)) * b;
}
//------------------------------------------------------------------------------------------------------------------
ll isSorted(vector<ll> A)
{
 
    ll n = A.size();
    forn(i, 0, n - 1)
    {
        if (A[i] > A[i + 1])
            return 0;
    }
    return 1;
}
//------------------------------------------------------------------------------------------------------------------
 
//------------------------------------------------------------------------------------------------------------------
 
//------------------------------------------------------------------------------------------------------------------
 
//------------------------------------------------------------------------------------------------------------------
 
//------------------------------------------------------------------------------------------------------------------
 
//------------------------------------------------------------------------------------------------------------------
 
//------------------------------------------------------------------------------------------------------------------
 
//------------------------------------------------------------------------------------------------------------------
 
//------------------------------------------------------------------------------------------------------------------
//solve function
void solve()
{
 int N , M;
cin>>N>>M;
 
std::vector<int> cnt(N,0);
  for(int i=0;i<N;i++)cnt[i]=0;
  for(int i=0;i<M;i++)
  {
   int a;cin>>a;
   cnt[a-1]++;
  }
  int l=0,r=M;
  while(r-l>1)
  {
   int mid=(l+r)/2;
   int rest=0;
   for(int i=0;i<N;i++)if(cnt[i]>mid)rest+=cnt[i]-mid;
   for(int i=0;rest>0&&i<N;i++)if(cnt[i]<=mid)rest-=(mid-cnt[i])/2;
   if(rest<=0)r=mid;
   else l=mid;
  }
  cout<<r<<"\n";
}
 
//------------------------------------------------------------------------------------------------------------------  
int main() 
{
 GODSPEED
 
    TEST
    {
        solve();
    }
}
 
 
 
  
  