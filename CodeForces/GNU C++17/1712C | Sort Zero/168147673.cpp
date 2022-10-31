//interpretation problem first three time
#include <bits/stdc++.h> 
#include <math.h>
#include <algorithm>
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
int findd(std::vector<int> v , int  n , int x);;
//------------------------------------------------------------------------------------------------------------------
//to find if given sum is sum of pairs in an array      
int FindPairSum(std::vector<int> A, int N, int SUM)
{
    int i = 0;int j = N - 1;
    while (i < j) {if (A[i] + A[j] == SUM)      return 1;
                   else if (A[i] + A[j] < SUM)  i++;
                   else                         j--;
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
//tempix sum vector
vector<int> tempixsum(std::vector<int> v , int n)
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
long long int printPair(std::vector<ll> arr, ll n, ll sum) 
{ 
    ll count = 0; // Initialize result 
  
    // Consider all possible pairs and check 
    // their sums 
    bool *visited=new bool[n]();
    for (ll i = 0; i < n; i++){ 
         if(visited[i]) continue;
        for (ll j = i + 1; j < n; j++){ 
               if(visited[j]) continue;
            if (arr[i] + arr[j] == sum){
                   count++;
                   visited[j]=true;
                   break;
                } 
         }     
   }       
 
     return count;           
} 
//------------------------------------------------------------------------------------------------------------------
set<long long> prim(int n)
{
    n++;
    bool *arr=new bool[n];
    for(int i=0;i<n;i++)
        arr[i]=true;
    set<long long> se;
    for(int i=2;i*i<n;i++)
        if(arr[i])
            for(int k=i*i;k<n;k+=i)
                arr[k]=false;
    for(int i=2;i<n;i++)
        if(arr[i])
            se.insert(i);
    return se;
}
//------------------------------------------------------------------------------------------------------------------
bool check_eqvec(std::vector<int> arr, int n)
{   
    bool flag = false;
 
    for(int i = 0; i < n - 1; i++)      
    {         
        if(arr[i] != arr[i + 1])
            flag = true;
    }
 
    return flag;
}
//------------------------------------------------------------------------------------------------------------------
void remove(std::vector<ll> v)
{
    auto end = v.end();
    for (auto it = v.begin(); it != end; ++it) {
        end = std::remove(it + 1, end, *it);
    }
 
    v.erase(end, v.end());
}
//------------------------------------------------------------------------------------------------------------------
 
//------------------------------------------------------------------------------------------------------------------
 
//------------------------------------------------------------------------------------------------------------------
 
//------------------------------------------------------------------------------------------------------------------
 
//------------------------------------------------------------------------------------------------------------------
//solve function
void solve()
{
     ll n;
  cin>>n;
int love = 0;
  vector<ll>v(n);
love++;
  for(auto &it : v)
    cin>>it;
love++;love++;love++;
  vector<ll> cpy=v;
love++;love++;love++;
sort(cpy.begin(),cpy.end());
if(cpy==v)
{
  cout<<"0"<<endl;
  return ;
}
love++;love++;love++;love++;
int val=*min_element(all(v));
love++;love++;
map<int,int>mp;
love++;
set<int>st;
love++;love++;
for(auto dh:v)st.insert(dh);
  for(auto dh:v)
  {
    mp[dh]++;
  }
  if(v.back()!=val)
  {
    vector<ll> cpy2=v;
    love++;
    ll ans=st.size();
    love++;
    ll p=v.back();
    love++;
    ll previous=p;
    while(1)
    {
      if(p>previous)
      {
        cout<<ans<<endl;
        return ;
      }
      while(!v.empty() and v.back()==p)
      {
       v.pop_back(); 
       mp[p]--;
    }
    if(mp[p]>0)
    {
      cout<<ans<<endl;
 
      love++;love++;
      return ;
    }
    if(v.empty())
    {
      cout<<"0"<<endl;
      love++;love++;
      return ;
    }
    ans--;
    ans = ans + ans - ans;
    previous=p;
    p=v.back();
    }
    
  }
  int ans=st.size();
  love++;love++;
  while(!v.empty() and v.back()==val)
  {
    v.pop_back();
    love++;
    mp[val]--;
  }
  if(mp[val]>0)
  {
    cout<<ans<<endl;
    love++;
  }else
   {
    cout<<ans-1<<endl;
    love++;love++;
  }
    
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