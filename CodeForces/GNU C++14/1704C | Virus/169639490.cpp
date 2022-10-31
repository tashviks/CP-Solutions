 
//interpretation problem first three time
#include <bits/stdc++.h> 
#include <math.h>
#include <algorithm>
using namespace std;
//------------------ The code is written by Tashvik Srivastava ------------------// 
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
 
 
 
 
 // int N, M;
 //        cin >> N >> M;
 //        vector<pair<int, int>>arr,cr;
 //        int i;
 //        for (i = 0; i <N; i++)
 //        {
 //            int a, b;
 //            cin >> a >> b;
 //            arr.push_back({ a,b });
 //            cr.push_back({a-b ,1});
 //            cr.push_back({ a,-2 });
 //            cr.push_back({a + b,1 });
 //        }
        
 //        sort(cr.begin(), cr.end());
 //        int ms = -(1LL<<60);
 //        int mm = 1LL << 60;
 //        int bt = 0;
 //        int cp = 0;
 //        for (i = 0; i < cr.size()-1; i++)
 //        {
 //            if (cp > M)
 //            {
 //                ms = max(ms, cp-M + cr[i].first);
 //                mm = min(mm, cr[i].first - cp+M);
 //            }
 //            bt += cr[i].second;
 //            cp += bt * (cr[i + 1].first - cr[i].first);
 //        }
 //        for (i = 0; i < N; i++)
 //        {
 //            cout << (((arr[i].first - arr[i].first) <= mm) && ((arr[i].first + arr[i].second) >=ms));
 //        }
 //        cout << '\n';
 //    }
 
 
 
// ll a , b , n , s;
// cin>>a>>b>>n>>s;
 
// if (s % n <= b && 1 * a * n + b >= s)
//             cout << "YES"<<endl;
        
//         else 
//             cout << "NO"<<endl;
 
    // ll n , l , r , res = 0;
    // cin>>n>>l>>r;
 
    // std::vector<ll> v(n);
 
    // for(auto &it : v)
    //     cin>>it;
 
    // sort(v.begin(), v.end());
 
    // for (int i = 0; i < n; i++)
    //  {
    //     res += upper_bound(v.begin(), v.end(), r - v[i]) - v.begin();
        
    //     res -= lower_bound(v.begin(), v.end(), l - v[i]) - v.begin();
       
    //     if (l <= 2 * v[i] && 2 * v[i] <= r) 
    //     {
    //         res--;
    //     }
    // }
    // cout<<res/2<<endl;
 
    // int n , x;
 
    // cin>>n>>x;
 
    // int numm[2000002];
    //     for (int i = 1; i <= n; i++) 
    //     {
    //         cin>>numm[i];
    //     }
 
    //     int num_min = numm[1];
 
    //     int num_max = numm[1];
 
    //     int res = 0;
 
    //     for (int i = 2; i <= n; i++) 
    //     {
    //         if (numm[i] > num_max) 
    //         {
    //             num_max = numm[i];
    //         }
 
    //         if (numm[i] < num_min)
    //         {
    //             num_min = numm[i];
    //         }
            
    //         if (num_max - num_min > 2 * x) 
    //         {
    //             res++;
    //             num_min = num_max = numm[i];
    //         }
    //     }
    //     cout<<res<<endl;
 
    // int n;
    // cin>>n;
 
    // std::vector<int> v(n);
 
    // for(auto &it : v)
    //     cin>>it;
 
    // ll suma = 0 , sumb = 0;
    // int cnt = 1;
 
    // suma+=v[0];
    // v[0]=0;
 
    // ll moves = 0;
 
    // int end = n-1 , strt = 1;
 
    // while(cnt<n)
    // {
    //     if(sumb<suma)
    //      {
    //     while(sumb<suma)
    //     {
    //         sumb+=v[end];
    //         v[end] = 0;
    //         cnt++;
    //         end--;
    //     }
    //     moves++;
    // }
 
    //     else
    //   {
    //     while(sumb>suma)
    //     {
    //         suma+=v[strt];
    //         v[strt] = 0;
    //         cnt++;
    //         strt++;
    //     }
    //     moves++;
    // }
        
 
    // }
    // cout<<moves<<" "<<suma<<" "<<sumb<<"\n";
 
 
 
    // int a = 0, b = n - 1;
    //     int suma = 0, sumb = 0;
    //     int moves = 0, ansa = 0, ansb = 0;
    //     while (a <= b) 
    //     {
    //         if (moves % 2 == 0)
    //          {
    //             int nsuma = 0;
    //             while (a <= b && nsuma <= sumb)
    //             {
    //                 nsuma += v[a++];
    //             }
 
    //             ansa += nsuma;
    //             suma = nsuma;
    //         } 
 
 
    //         else 
    //         {
    //             int nsumb = 0;
    //             while (a<= b && nsumb <= suma) 
    //             {
    //                 nsumb += v[b--];
    //             }
 
    //             ansb += nsumb;
    //             sumb = nsumb;
    //         }
    //         ++moves;
    //     }
    //     cout << moves << " " << ansa << " " << ansb << endl;
 
//-----------------------------------------------------------------------------------------------   
// const int N=43;
 
// string a;
 
// int n,m,q;
 
// ll l[N],r[N],s[N],x;
 
//    cin>>n>>m>>q>>a,a=" "+a;
//     s[0]=n;
 
//     for(int i=1;i<=m;++i)
//         cin>>l[i]>>r[i],s[i]=s[i-1]+r[i]-l[i]+1;
 
//     cout<<s<<"  ";
 
 
//     while(q--)
 
//     {
//         cin>>x;
//         for(int i=m;i;--i)
//             if(x>s[i-1] && x<=s[i])
//                 x-=s[i]-r[i];
//         cout<<a[x]<<'\n';
 
 
// }
 
// ll n;
// cin>>n;
 
// vector<ll> v(n);
 
// for(auto &it : v)
//     cin>>it;
 
// for(int i=v[0]-1 ; i<=v[0]+1 ; i++)
// {
 
    
//         ll cur=i;
//         bool ok=1;
//         forn(j , 0 , n)
//         {
//             if((abs(cur-v[j]))<=1)
//             {
//                 cur++;
//             }
 
//             else
//             {
//                 ok=0;
//                 break;
//             }
//         }
//         if(ok){
//             cout << "YES\n";
//             return;
//         }
//     }
//     cout << "NO\n";
 
// ll k,n;
//     cin>>n>>k;
//     if (n%2==0)
//     {
//      if (k>n/2)
//      {
//          cout<<((k-(n/2)))*2;
//      }
//      else 
//      {
//          cout<<k*2-1;
//      }
//         return;
//     }
//     else 
//     {
//         ll o = (n/2) + 1;
//         if (k > o ){
//             cout<<(k-o)*2;
//         }
//         else 
//         {
//             cout<<k*2-1;
//         }
//     }
 
 /*int n,k;
        cin>>n>>k;
        int now=k;
        string s;
        vector<int> v(n);
        cin>>s;
        for(int i=0;i<n&&k>0;i++){
            if((s[i]-'0')==now%2){
                k--;
                v[i]=1;
            }
        }
        v[n-1]+=k;
        for(int i=0;i<n;i++){
            if((now-v[i])%2==1){
                s[i]='1'-(s[i]-'0');
            }
        }
        cout<<s<<endl;
        for(int i=0;i<v.size();i++)cout<<v[i]<<' '; 
        cout<<endl;*/
 
    // int n;
    // cin>>n;
 
    // vector<int> v(n);
 
    // int z = 0 , nz = 0;
 
    // for(auto &it : v)
    // {
    //     cin>>it;
 
    //     if(it == 0)
    //         z++;
    //     else
     
    //         nz++;
    // }
 
    // if(z==n)
    // {
    //     cout<<0<<endl;
    //     return;
    // }
    // else if(z==0)
    // {
    //     cout<<1<<endl;
    //     return;
    // }
 
/*
    int l = 0, r = 0;
 
    for(int i= 0;i<n;i++)
    {
        if(v[i]!=0)
        {
            l=i;
 
            break;
        }
 
    }
    for (int i = n-1; i!=-1; i--)
    {
       if(v[i]!=0)
       {
        r=i;
        break;
       }
    }
    
    for(int i = l;i<=r;i++)
    {
        if(v[i]==0)
        {
            cout<<2<<endl;
            return;
        }
    }
 
    cout<<1<<endl;*/
    
       /*ll a , b , c, d;
       cin>>a>>b>>c>>d;
 
     
 
       ll t1 = a*d , t2 = b*c;
 
       if(t1 == t2)
        cout<<0<<endl; 
    
        else if (t2 != 0 && t1 % t2 == 0 || t1 != 0 && t2 % t1 == 0)
        cout << "1"<<endl;
    
 
        else
       cout << "2"<<endl; */
 
    long long n,m,a[100005],s[100005],sum=0;
        cin>>n>>m;
        for(int i=1;i<=m;i++){
            cin>>a[i]; 
        } 
        sort(a+1,a+m+1);
        s[1]=a[1]+n-a[m]-1;
        for(int i=2;i<=m;i++){
            s[i]=a[i]-a[i-1]-1;
        }
        sort(s+1,s+m+1);
        for(int i=m;i>=1;i--){
            if(s[i]<=4*(m-i))break;
            else if(s[i]==4*(m-i)+1){
                sum++;break;
            }
            else{
                sum+=s[i]-(4*(m-i)+1);
            }
        }
        cout<<n-sum<<endl;
    
 
 
    
 
 
    }
 
    
    
   
//------------------------------------------------------------------------------------------------------------------  
int main() 
{
    TEST
    solve();
 
 
}
    