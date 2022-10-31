#include <bits/stdc++.h> 
#include <math.h>
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
const int  MAX = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;
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
//-------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------
//solve function
void solve()
{
   /* 
   ll x , y , a, b;
    cin>>a>>b>>x>>y;
 
    ll ans = 0;
        if (y > 2 * x) {
            ans += (a + b) * x;
        }
        else {
            ans += min(a,b) * y;
            ll c = min(a,b);
            a -= c;
            b -= c;
            ans += (a + b) * x;
        }
        cout << ans << endl;
        */
 
 
  /*
    ll n , k;
    cin>>n>>k;
 
    if(k*k > n)
        cout<<"NO"<<endl;
    else if(n%2 != k%2)
        cout<<"NO"<<endl;
    else
        cout<<"YES"<<endl;
        */
/* 
    ll n , m;
    cin>>n>>m;
 
    vector<int> v(n);
 
    for(auto &it : v)
        cin>>it;
    
   for(int i = 0;i<m;i++)
    {
        int64_t x;
        cin>>x;
        --x;
 
        set<int> st;
 
        for(int i=x;i<n;i++)
        {
            st.insert(v[i]);
        }
 
        cout<<st.size()<<endl;
    }
    */
 
/*    
        set<ll> s; std::vector<ll> ans(n , 1);
        s.insert(v.back());
        for (int i = v.size() - 2; i >= 0; i--) 
        {
            if (s.find(v[i]) == s.end()) 
            {
                s.insert(v[i]);
                ans[i] = ans[i + 1] + 1;
            }
            else 
                ans[i] = ans[i + 1];
        }
 
        while (m--) 
        {
            ll a;
            cin >> a; 
            cout <<ans[a - 1]<< endl;
        }
 
        */
        
 
 /*   
 
   ll n,m;
    cin>>n>>m;
    vector<ll> v(n),ans(n+1);
    unordered_set<int>st;
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    for(int i=n-1;i>=0;i--)
    {
        st.insert(v[i]);
        ans[i+1]=st.size();
    } 
 
    // We make an array answer and we start inserting elements from the back of v
    // and simultaneously initialise ans[i+1] to size of set as all elements will
    // be distinct
    
    for(int i=0;i<m;i++)
    {
        ll q;
        cin>>q;
        cout<<ans[q]<<"\n";
 
    }
*/
/*int a, b, x, y, n;
        cin >> a >> b >> x >> y >> n;
        long long ans = 1e18;
        for (int i = 0; i < 2; ++i) {
            int da = min(n, a - x);
            int db = min(n - da, b - y);
            ans = min(ans, (a - da) * 1ll * (b - db));
            swap(a, b);
            swap(x, y);
        }
        cout << ans << endl; */  
 
 
 
/*int n;
cin>>n;
 
vector<int> v(n);
 
for(auto &it : v)
cin>>it;
 
int pos = n-1;
 
while(pos>0 && v[pos-1]>=v[pos])
    pos--;
 
while(pos>0 && v[pos-1]<=v[pos])
    pos--;
 
cout<<pos<<endl;*/
 
/*ll n , h;
cin>>n>>h;
 
vector<int> a(n);
for(auto &it : a)
cin>>it;
int l = 0 , r = 1e18, m;
 
    while (r - l != 1)
    {
        m = (l + r) / 2;
        ll res = 0;
        for (int i = 0;i<n;i++)
            res += min(a[i + 1] - a[i], m);
        if( res + m >= h)
            r = m;
        else
            l = m;
            }
    cout<<l<<endl;
*/
int n;long long h;
cin>>n>>h;
ll a[n];
for(int i=1;i<=n;i++) cin>>a[i];
ll l=0,r=h;
while(r>l)
{
ll mid=(r+l)/2;
ll ans=0;
for(int i=1;i<=n-1;i++)
ans+=min(mid,a[i+1]-a[i]);
ans+=mid;
if(ans>=h) r=mid;
else l=mid+1;
 
 
}
cout<<r<<endl;
}   
//------------------------------------------------------------------------------------------------------------------  
signed main() 
{
    GODSPEED
    TEST
    solve();
}