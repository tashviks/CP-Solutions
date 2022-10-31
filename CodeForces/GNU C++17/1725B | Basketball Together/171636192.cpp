#include <bits/stdc++.h> 
#include <math.h>
#include<stdint.h>
#include<cstdint>
#include <algorithm>
using namespace std;
 
 
 
 
//------------------ The code has been written by Tashvik Srivastava ------------------// 
#define GODSPEED ios_base::sync_with_stdio(0);cin.tie(0); cout.tie(0);
#define TEST int t; cin>>t; for(int i = 0;i<t;i++)  
#define NoTEST int t = 1; while(t--)
#define inp(v) for (int i = 0; i < n; ++i) {cin>>tp;v.push_back(tp);}
#define ll long long
#define ld long double
#define sza(x) ((int)x.size())
#define all(a) (a).begin(), (a).end()
#define pb push_back
#define popb pop_back
#define forn(i, x, n) for (ll i = x; i < n; i++)
#define fornb(i, n, x) for (ll i = n; i >=x; i--)
#define endl "\n" 
#define unt uint32_t
const int  MAX = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;
 
//______________________________________________________________________________________________
#define TRACE
#ifndef ONLINE_JUDGE
#define trace(...) __f(#__VA_ARGS__, __VA_ARGS__)
    template <typename Arg1>
    void __f(const char* name, Arg1&& arg1){
        cout << name << " : " << arg1 << endl;
        //use cout if u want to display at the bottom
    }
    template <typename Arg1, typename... Args>
    void __f(const char* names, Arg1&& arg1, Args&&... args){
        const char* comma = strchr(names + 1, ','); cout.write(names, comma - names) << " : " << arg1<<" | ";__f(comma+1, args...);
    }
#else
#define trace(...)
#endif
//____________________________________________________________________________________________
int remove0(int n);
int ispalin(string S);
//first try (time taken about 15 min)
//best case complexity of O(n)
int findd(std::vector<int> v , int  n , int x);
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
//tpix sum vector
vector<int> tpixsum(std::vector<int> v , int n)
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
ll gcd(ll a, ll b)
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
    ll cnt = 0; // Initialize result 
  
    // Consider all possible pairs and check 
    // their sums 
    bool *visited=new bool[n]();
    for (ll i = 0; i < n; i++){ 
         if(visited[i]) continue;
        for (ll j = i + 1; j < n; j++){ 
               if(visited[j]) continue;
            if (arr[i] + arr[j] == sum){
                   cnt++;
                   visited[j]=true;
                   break;
                } 
         }     
   }       
 
     return cnt;           
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
//RETURNS A SET OF DIVISORS OF N
set<int64_t> printDivisors(int64_t n)
{
    // Vector to store half of the divisors
    set<int64_t> v;
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
 
            // check if divisors are equal
            if (n / i == i)
            {
                // printf("%d ", i);
                v.insert(i);
            }
            else
            {
                // printf("%d ", i);
                v.insert(i);
                // push the second divisor in the vector
                v.insert(n / i);
            }
        }
    }
    return v;
    // // The vector will be printed in reverse
    // for (int i = v.size() - 1; i >= 0; i--)
    //     printf("%d ", v[i]);
}
//------------------------------------------------------------------------------------------------------------------
 
//------------------------------------------------------------------------------------------------------------------
struct hashFunction
{
  size_t operator()(const pair<int , 
                    int> &x) const
  {
    return x.first ^ x.second;
  }
};
 
 
//------------------------------------------------------------------------------------------------------------------
 
   int cntdig(int n)
   {
    int cnt = 0 ;
 
    while(n!=0)
    {
        n/=10;
        cnt++;
    }
 
    return cnt;
   }
 
//------------------------------------------------------------------------------------------------------------------
bool isPowerOfTwo(int n)
{
   if(n==0)
   return false;
 
   return (ceil(log2(n)) == floor(log2(n)));
}
//-------------------------------------------------------------------------------------
int Search(int arr[], int l, int r, int x)
{
    if (r >= l) 
    {
       int mid = l + (r - l) / 2;
        if (arr[mid] == x)
            return mid;
        if (arr[mid] > x)
            return Search(arr, l, mid - 1, x);
        return Search(arr, mid + 1, r, x);
    }
}
//-------------------------------------------------------------------------------------
ll sum_nat(int n)
{
    return n * 1ll * (n + 1) / 2;
}
//-------------------------------------------------------------------------------------
bool check_sqr(long double x)
{
    if(x>=0)
    {
    ll sr = sqrt(x);
    return(sr*sr==x);
    }
    return false;
 
}
//-------------------------------------------------------------------------------------
bool check_even(int n)
{
    if(n & 1)
        return 0;
    else 
        return 1;
}
//-------------------------------------------------------------------------------------
int count1bits(uint32_t n) 
{                               // counts number of ones in a bitmask
   return bitset < 32 > (n).count();
}
//-------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------
//solve function
void solve()
{
/*ll n ; cin >> n;
    ll cnt25 = 0 , cnt50 = 0 , cnt100 = 0;
 
    forn(i,0,n)
    {
        int no ; cin >> no ;
 
        if(no==25)
        {
            cnt25++;
        }
        else if(no==50)
        {
            if(cnt25>0)
            {
                cnt25--;
                cnt50++;
            }
            else
            {
                cout << "NO" << endl;
                return;
            }
        }
        else{
            if(cnt25>0 && cnt50>0)
            {
                cnt100++;
                cnt25--;
                cnt50--;
            }
            else if(cnt25>=3)
            {
                cnt25-=3;
                cnt100++;
            }
            else
            {
                cout << "NO" << endl;
                return;
            }
        }
    }
 
   cout << "YES" << endl;*/
 
 
 
/*int n;
cin>>n;
 
vector<int> v(n);
 
int mx = 0 , pos;
for(auto &it : v)
{
cin>>it;
 
mx = max(mx,it);
 
}
 
if(n==1)
{
    cout<<1<<endl;
    return;
}
 
else
{
 
for(int i = 0;i<n;i++)
{
    if(v[i]==mx)
    {
        cout<<i+1<<endl;
        return;
    }
}
 
}*/
ll n , d;
cin>>n>>d;
 
std::vector<int> v(n);
 
for(auto &it : v)
    cin>>it;
 
sort(v.begin(), v.end() );
int cnt=0 , ans=0 , i=n-1;
int m = d;
while(cnt<n)
{
int x=v[i];
int v=m/x+1;
if(v*x>m && n-cnt>=v)
ans++;
cnt=cnt+v;
i--;
}
cout<<ans;
}
 
// 100 90 80 70 60 50
 
//------------------------------------------------------------------------------------------------------------------  
int main()
{
    GODSPEED
    NoTEST
    solve();
}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 