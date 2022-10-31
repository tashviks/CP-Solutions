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
    return 0;
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
    /*int n;
    cin>>n;
    std::vector<ll> v(n);
    for(auto &it : v)
        cin>>it;
    int oc = 1 , count = 1;
    sort(v.begin(), v.end());
    for(int i = 1;i<n;i++)
    {
        if(v[i]==v[i-1])
            count++;
        else
            count = 1;
        oc = max(oc , count);
    }  
 
    if(oc == n)
    {
        cout<<0<<endl;
        return;
    } 
    ll move ;
    move =(n-oc) + (n - oc)/oc;
    if(oc == 1 && n==2)
        cout<<move<<endl;
    else if(oc==1)
        cout<<move-1<<endl;
    else
        cout<<move<<endl;*/
 
 // int n , k;
 // cin>>n>>k;
 // string s;
 // cin>>s;
 
 // int res= 0;
 // for(int i = 0;i<n;i+=0)
 // {
    // int j = i+1;
    //         while(j<n && s[j]!='1') // making blocks of zeroes
    //             ++j;
    //         int lft = s[i] == '1' ? k : 0;   // Initial and final block restrictors 
    //         int rht = j < n && s[j] == '1' ? k : 0;
    //         int len = j - i;
    //         if (lft == k) 
    //         {
    //             len--;
    //         }
    //         len -= lft + rht;
    //         if (len > 0) 
    //         {
    //             res += (len + k) / (k + 1);
    //         }
    //         i = j;
    //     }
    //   cout<<res<< endl;
     // int n;
     //    cin >> n;
     //    map <int, int> d;
     //    for (int i = 0; i < n; ++i)
     //     {
     //        int x;
     //        cin >> x;
     //        d[x]++;
     //    }
     //    int cnt = 0;
     //    for (auto i : d) {
     //        ++cnt;
     //    }
     //    int cur_cnt = cnt;
     //    for (int k = 1; k <= n; ++k) {
     //        cout << max(k, cnt) << "\n";
     //    }
 
   // ll n,x,y;
   //  cin>>n>>x>>y;
   //   int love = 0;
   //  if((x!=0 && y!=0) || (x==0 && y==0))
   //  {
   //      cout<<-1<<endl;
   //      return;
   //  }
   //  if(love == 0)
   //      love = x;
   //  if(x<y)
   //  {
   //      swap(x,y);
   //  }
   //  ++love;
   //  --love;
 
   //  if(!((n-1)%x))
   //  {
   //      int pnt = 1;
   //      y = 0;
 
   //      for (auto i = 0; i < n-1; ++i)
   //      {
   //          if(x==y)
   //          {
   //              y=0;
   //              pnt=i+2;
   //          }
   //          y++;
   //          cout<<pnt<<" ";
   //      }  
   //      love++;
   //      cout<<endl;
   //  }
   //  else
   //  {
   //      cout<<-1<<endl;
   //      return;
   //  }
 
//  int n;
//     cin>>n;
//    vector<int> v(n);
//    vector<pair<int,int>> res;
//     for(auto &it : v)
//         cin>>it;
// int love = 0;
//     if(n==1)
//     {
//         cout<<0<<endl;
//         return;
//     }
//     res.push_back({1,n});
//     ++love;
//   if((v[0]+v[n-1])%2)
//   {
//         v[n-1] = v[0];
//     }
//     else
//     {
//         v[0] = v[n-1];
//     }
//     ++love;
//     ll even = v[0]%2;
//     for (int i = 1; i < n-1; ++i)
//     {
//         if(even==0)
//         {
//             if(v[i]%2)
//             {
//                 res.push_back({1,i+1});
//             }
//             else
//             {
//                 res.push_back({i+1,n});
//             }
//         }
//         else
//         {
//             if(v[i]%2==0)
//             {
//                 res.push_back({1,i+1});
//             }
//             else
//             {
//                 res.push_back({i+1,n});
//             }
//         }
 
//     }
//     if(love != 0)
//     {
//     cout<<res.size()<<endl;
// }
 
//     for(auto it: res)
//     {
//         cout<<it.first<<" "<<it.second<<endl;
//     }
 
// ll n,x,y;
//     cin>>n>>x>>y;
//     int love = 1;
//     string s1 , s2;
//     cin>>s1>>s2;
//     vector<ll> v;
 
//     for(int i =0;i<n;i++)   
//         if(s1[i]!=s2[i])
//             v.push_back((ll)i);
 
//         ll len = v.size();
//     if(len%2)
//     {
//         cout<<-1<<endl;
//         return;
//     }
    
//     if(len==2)
//     {
//         ++love;
//         if((v[0]+1==v[1]) && love!=0)
//         {
//             if(n==2 || n==3)
//                 cout<<x<<endl;
//             else if(n==4)
//             {
//                 if(v[0]==1) cout<<x<<endl;
//                 else cout<<min(2*y, x)<<endl;    
                
//             }
//             else cout<<min(2*y, x)<<endl;
            
//         }
//         else
//         {   if(love!=0)
//             cout<<y<<endl;
//         }
//         love+=12;
//         if(love<0)
//         {
//             // do nothing
//         }
 
//         return;
//     }
//     if(love > 0)
//     {
//     cout<<((v.size()/2) * y)<<endl;
//     return;
// }
 
// int n;
// cin>>n;
// vector<int> v(n);
 
// // Someone killed himself in my college
// for(auto &it : v)
// cin>>it;
// sort(v.begin(), v.end());
// std::vector<int> pfx(n , 0);
// pfx[0] = v[0];
// for(int i = 1;i<n;i++)
// {
//     pfx[i]+=pfx[i-1]+v[i];
// }
// int cnt = 0;
// for(int i = 1;i<n;i++)
// {
//     if(pfx[i]>pfx[i-1])
//         ++cnt;
 
// }
// cout<<cnt<<endl;
// ll prefixSum = 0, count = 0;
//   for (ll i = 0;i < n;i++)
//     if (prefixSum <= v[i])
//     {
//       prefixSum += v[i];
//       count++;
//     }
//   cout<<count<<endl;
 
        // ll n,x,y;
        // cin>>n>>x>>y;
        // ll d=n-1;
        // while((y-x)%d!=0)
        //     d--;
        // d=(y-x)/d;
        // int ele=y-d*(n-1);
        // while(ele<=0)
        //     ele+=d;
        // for(int z=0;z<n;z++)
        // {
        //     cout<<ele<<" ";
        //     ele+=d;
        // }
        // cout<<endl;
 
    int n;
    cin>>n;
 
    int arr[n];
 
    for(auto &it : arr)
        cin>>it;
 
    bool flag = false ;
    for (int i=1; i<n; i++)
        {
            if (arr[i]>=arr[i-1])
            {
                flag=true;
                break;
            }
        }
if(!flag)
    cout<<"NO"<<endl;
else
    cout<<"YES"<<endl;
 
 }
//------------------------------------------------------------------------------------------------------------------  
int main()
{
    GODSPEED
    TEST
    solve();
}
 
 
 
 
 
 