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
bool check(char ch)
{
    if (ch == 'a' || ch == 'e' || ch == 'i'|| ch == 'o' || ch == 'u')
    {
       return 1; 
    }
    return -1;
}
void solve()
{
/*int n;
cin>>n;
 
vector <int> v(n);
 
for(auto &it : v)
cin>>it;
 
char ch;
cin>>ch;
 
int pos = -1 , vw=0 , c=0;
if(pos == -1)
for(int i = 0;i<n-1;i++)
{
    if(check(v[i]) && check(v[i+1]))
    {
        pos = i;
        vw+=1;
        break;
    }
}
if(pos == -1)
{
    for(int i = 0;i<n-2;i++)
    if(!check(v[i]) && !check(v[i+1]) && !check(v[i+2]))
    {
        pos = i;
        c+=1;
        break;
    }
}
if(pos == -1)
{
    cout<<"Can't be inserted";
}
else
{
    for(int i = 0;i<n;i++)
    {
        if(pos == i)
            cout<<
    }
}*/
 
    /*int n;
    cin>>n;
 
    vector<int> x(n);
    std::vector<int> y(n);
 
    std::vector<pair<int , int>> v;
 
    for(auto &it : x)
    cin>>it;
 
    for(auto &it : y)
    cin>>it;
 
    for(int i = 0; i < n; i++)
    {
        v[i].first = y[i] - x[i];
        v[i].second = i;
    }
 
    sort(v.begin(), v.end());
 
    reverse(v.begin(), v.end());
 
    int j = n - 1, cnt = 0;
 
    for(int i = 0; i < n; i++)
    {
        while(j > i && v[i].first + v[j].first < 0) 
            j--;
 
        if(j <= i) 
            break;
 
        cnt++; j--;
    }
    cout <<cnt<< endl;
*/
 
 
 
 
 
 
 
 
 
 
/*for(int i = 0;i<n;i++)
{
    v[i].first = y[i] - x[i];
    v[i].second = i;
}
sort(v.begin(), v.end() , greater<int>());
 
int pos = n-1 , cnt = 0;
for(int i = 0;i<n;i++)
{
    while(pos > i and (v[i].first + v[pos].first) <0)
        --pos;
 
    if(pos<=i)
        break;
    else
    {
        ++cnt;
        --pos;
    }
}
 
cout<<cnt<<endl;*/
 
ll n;
cin>>n;
 
if(n>0)
{
    cout<<n<<endl;
    return;
}
else
{
    if(n%10 < (n/10)%10)
    {
        n=n/10;
        cout<<n<<endl;
        return;
    }
    else
    {
        ll dig = n%10;
        n=n/100;
        if(n==0)
            cout<<dig<<endl;
        else
        cout<<n<<abs(dig)<<endl;
    }
}
 
 
 
 
 
 
 
 
 
 
 
}
 
// 100 90 80 70 60 50
 
//------------------------------------------------------------------------------------------------------------------  
int main()
{
    GODSPEED
    NoTEST
    solve();
}
 
 
 
 
 
 
 
 
 
 
 
 
 