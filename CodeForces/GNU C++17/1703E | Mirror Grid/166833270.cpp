 
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
int search(int x , int n , std::vector<int> v)
{
    for(int i = 0;i<n;i++)
    {
        if(v[i]==x)
            return 1;
        
    }
    return 0;
 
}
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
 
//------------------------------------------------------------------------------------------------------------------
//solve function
void solve()
{
// string s;
//     cin>>s;
//     int n=s.size();
//     vector<int> prefixes(n,0);
//     if(s[0]==')')
//     {
//         prefixes[0]--;
//     }
//     if(s[0]=='(')
//     {
//         prefixes[0]++;
//     }
//     vector<int> qmarks;
//     forn(i , 0 , n){
//         if(s[i]=='?'){
//             qmarks.pb(i);
//         }
//     }
//     for(int i=1;i<n;i++){
//         if(s[i]==')'){
//             prefixes[i]--;
//         }
//         if(s[i]=='('){
//             prefixes[i]++;
//         }  
//         prefixes[i]+=prefixes[i-1];      
//     }
//     int opening=(qmarks.size()-prefixes[n-1])/2;
//     if(opening==qmarks.size() || opening==0){
//         cout<<"YES"<<endl;
//         return;
//     }
//     //cerr<<prefixes[n-1]<<endl;
//     for(int i=qmarks[opening-1];i<qmarks[opening];i++){
//         if(prefixes[i]+opening-1-1<0){
//             cout<<"YES"<<endl;
//             return;
//         }
//     }
//     cout<<"NO"<<endl;
 
 
//     int N,P,A,i;  
//     for(cin>>P,A=0,i=2; i*i<P; i++)
//     if(P%i==0)
//     {
//     if(A)
//     {
//    cout<<"YES"<<endl<<A<<" "<<i<<" "<<P/i<<endl;
//     return;
//     }
//     A=i,P/=i;
//     }
//     cout<<"NO"<<'\n';  
// }
 
// int n;
//     cin>>n;
//     vector<int> v(n+1);
//     for(int i =1; i<=n ;i++) cin>>v[i];
//     set<int> s;
//     for(int i = n; i>=1; i--)
//     {
//         s.insert(v[i]);
//         if(s.size()!=(n-i+1))
//         {
//             cout<<i<<endl;
//             return;
//         }
//     }
//     cout<<0<<endl;
//     return;
 
 
    // int n , H , M;
 
    // int ans = MAX;
 
    // cin>>n>>H>>M;
    // int mi = H*60 + M;
 
    // for(int i = 0;i<n;i++)
    // {
    //     int h , m;
    //     cin>>h>>m;
 
    //     int t = h*60-m;
    //     t-=mi;
 
    //     if(t < 0) 
    //         t += 24 * 60;
 
    //     ans = min(t , ans);
 
 
 
    // }
 
    // cout<<ans/60<<" "<<ans%60<<endl;
 
 int n;
        cin>>n;
        int arr[n][n];
        for (int i=0;i<n;i++){
          string s;
          cin>>s;
          for (int j=0;j<n;j++){
            if (s[j]=='0'){
                arr[i][j] = 0;
            }
            else{
                arr[i][j] = 1;
 
            }
          }
        }
        ll ans =0 ;
        unordered_set <pair<int,int> ,hashFunction> s;
        for (int i=0;i<n;i++){
            for (int j =0 ;j<n;j++){
                pair <int,int> p = make_pair(i,j);
                if (s.find(p)==s.end()){
                    int o =0 , z =0 ;
                    if (arr[i][j]==1){
                        o++;
                    }
                    else{
                        z++;
                    }
                    s.insert(make_pair(i,j));
 
                    if (arr[n-i-1][n-j-1]==1){
                        o++;
                    }
                    else{
                        z++;
                    }
                    s.insert(make_pair(n-1-i,n-1-j));
 
 
 
                    if (arr[j][n-i-1]==1){
                        o++;
                    }
                    else{
                        z++;
                    }
                    s.insert(make_pair(j,n-i-1));
 
 
                    if (arr[n-j-1][i]==1){
                        o++;
                    }
                    else{
                        z++;
                    }
                    s.insert(make_pair(n-j-1,i));
 
                    ans+=min(o,z);
 
                }
            }
        }
        cout<<ans<<endl;
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
 
  