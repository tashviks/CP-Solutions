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
#define bins(x , y , z) binary_search(x , y , z)
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
    return -1;
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
double getroot(int n , int m )
{
    /* 
 
     // Using Binary Search
 
    double low = 1 , high = m, eps = 1e-6;
 
    while((high - low)>eps)
    {
        double mid = (low+high)/2;
        if(pow(mid , n)<m) low = mid;
        else high = mid;
    }
 
    */
    return pow(m , (double)(1.0/(double)n));
 
}
//-------------------------------------------------------------------------------------
 int factorial( int n)
{
    if (n == 0 || n == 1)
        return 1;
    return n * factorial(n - 1);
}
//-------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------
//solve function
void solve()
{
// int n, m;
//     cin >> n >> m;
//     vector<vector<int>> a(n, vector<int> (m));
//     for (int i = 0; i < n; ++i) 
//     {
//         string s;cin >> s;
//         for (int j = 0; j < m; ++j)
//             a[i][j] = s[j]-'0';
//     }
//     vector<array<int, 4>>ans;
//     if (a[0][0] == 1) 
//     {
//         cout << -1<< '\n';
//         return;
//     }
//     for (int j = m - 1; j >= 0; --j) for (int i = n - 1; i >= 0; --i)if (a[i][j])if (i != 0) ans.push_back({i, j + 1, i + 1, j + 1}); else ans.push_back({i + 1, j, i + 1, j + 1});
    
 
//     cout<<ans.size()<<endl;
//     for (auto i : ans)
//         cout << i[0] << ' ' << i[1] << ' ' << i[2] << ' ' << i[3] <<endl;
 
    // int a , b , c;
    // cin>>a>>b>>c;
 
    // // a-d a a+d    a = b-(c-b) , b = (c-a)/2 + a , c = a+2*(b-a)
 
    // int na = b - (c-b) , nb = (c-a)/2 + a , nc = a+2*(b-a);
 
    // if((na>=a && na%a==0 && na != 0) || (nc >= c && nc % c == 0 ) || (nb >= b && (c-a)%2 == 0 && nb % b == 0 && nb != 0))
    //     cout<<"YES"<<endl;
    // else
    //     cout<<"NO"<<endl;
    // ll n , k;
    // cin>>n>>k;
 
    // vector<ll> v(n);
 
    // for(auto &it : v)
    //     cin>>it;
 
    // sort(v.begin(), v.end());
 
    // ll flag = 0;
 
    // for(int i = 0;i<n;i+=k)
    //     if(v[i]<0)
    //         flag -=v[i];
    // for(int i = n-1;i>=0;i-=k)
    //     if(v[i]>0) flag+=v[i];
 
    // ll ans = 2*flag-max(abs(v[0]) , abs(v[n-1]));
 
    // cout<<ans<<endl;
/*
    int n ;
    cin>>n;
    bool arey[n + 1];
    string str;
    cin >> str;
    for (int i =0 ; i < n; i++) 
        arey[i+1] = (str[i] == '1');
 
    long long ans = 0;
    int cost[n + 1];
 
    for (int i = n; i >= 1; i--){
        for (int j = i; j <= n; j += i) 
        {
            if (arey[j]) break;
            cost[j] = i;
        }
 
        
    }
    for (int i = 1; i <= n; i++) 
        if (!arey[i]) 
            ans += cost[i];
    
    cout << ans << '\n';*/
 
    // int n , t;
    // cin>>n>>t;
 
    // std::vector<int> v(n);
 
    // for(auto &it : v)
    //     cin>>it;
 
    // int mx = -45652;
    // for(int i = 0;i<n;i++)
    // {
    //     int sum = 0 , count = 0;
    //     for(int j = i;j<n;j++)
    //     {
    //         if(sum<=t)
    //         {
    //             sum+=v[j];
    //             count++;
    //         }
    //         else
    //         {
    //             break;
    //         }
 
    //     }
 
    //     mx = min(mx , count);
 
 
    // }
 
    // cout<<mx-1<<endl;
 
/*map<int,int,greater<int>>mp;
int n,a,ans;
    cin>>n;
    ans=0;
    mp.clear();
    for(int i=0;i<2*n;i++)
    {
        cin>>a;
        mp[a]+= i < n ? 1: -1;
    }
    for(auto &k:mp) 
    {
        mp[log10(k.first) + 1]+=k.second;
        ans+=abs(k.second);
    } 
    cout<<ans<<endl;
*/
 
/*    string s;
    cin>>s;
 
    char nm = '9';
 
    for(int i = s.length()-1;i>=0;i--)
    {
        nm = min(nm , s[i]);
        if(s[i]>nm && s[i]!='9') s[i]+=1;
    }
 
    sort(s.begin(), s.end());
    cout<<s<<endl;
*/
/*
    int n;
    cin>>n;
 
    vector<ll> a(n) , b(n);
 
    for(auto &it : a)
        cin>>it;
    for(auto &it : b)
        cin>>it;
 
    forn(i , 0 , n)
     cout<<abs(a[i]-*lower_bound(b.begin() , b.end() , a[i]))<<" ";
     cout<<"\n";
 
    ll nm = 1;
 
    forn(i , 1 , n+1)
 
    {
        nm = max(nm , i);
        while(nm<n&&a[nm]<=b[nm-1])
 
            nm++;
            cout<<b[nm-1]-a[i-1]<<' ';
    }
    cout<<"\n";
 
*/
/*
    ll n , d , e;
    cin>>n>>d>>e;
 
    ll result = n;
 
    for(int i = 0;i*5*e<=n;i++)
    {
        result = min(result , (n-5*e*i)%d);
    }
 
    cout<<result<<endl;
 
*/
 
  /*  ll n , r , b;
    cin>>n>>r>>b;
 
    int x = r/(b+1) , y = r%(b+1);
 
    for(int i = 0;i<y;i++)
        cout<<string(x+1 , 'R')<<'B';
    for(int i = y;i<b;i++)
        cout<<string(x , 'R')<<'B';
 
    cout<<string(x , 'R');
 
    cout<<"\n";
    */
/*
    int n ;
    cin>>n;
    vector<pair<int , int>>v; 
 
    int x , y; int ans = -1e9;
    for(int  i =0;i<n;i++)
    {
        cin>>x>>y;
        v.push_back(make_pair(x , y));
        
    }
 
    sort(v.begin(), v.end());
 
    forn(i , 0 , n)
    {
        if(ans <= v[i].second)
            ans = v[i].second;
        else
            ans = v[i].first;
       
    }
    
        
        cout<<ans<<endl;
 
    */
 
/*    int n , x;
    cin>>n>>x;
    int count = 0;
    for(int i = 1;i<=n;i++)
    {
        if(x%i==0 && x/i<=n)
            count++;          
    }
    cout<<count<<endl;
    */
/*
    int n , k;
    cin>>n>>k;
    vector<int> v;
 
    int x;
    std::unordered_set<int> set;
 
    for(int i = 0;i<n;i++)
    {
        cin>>x;
        v.push_back(x);
        set.insert(x);
    }
 
     int  s = set.size();
     int nm = v.size();
     
     if(s>k)
     {
        cout<<-1<<endl;
        return;
     }
     
        cout<<n*k<<endl;
        while(s<k)
        {
            v.push_back(1);
            s++;
        }
     
 
     for(int i = 0;i<v.size();i++)
        cout<<v[i]<<" ";
 
    cout<<endl;*/
/*
    int n;
    cin>>n;
 
    vector<int> v(n);
 
    for(auto &it : v)
    {
        cin>>it;
    }
 
    vector<int> d;
 
    d.push_back(v[0]);
    for(int i = 1;i<n;i++)
    {
        int x1 = v[i]+d[i-1];
        int x2 = -v[i]+d[i-1];
 
        if(x1>=0 && x2>=0)
        {
            if(x1!=x2)
                {cout<<-1<<endl;
                    return;}
                    d.push_back(x1);
            
        }
        else if(x1>=0)
            d.push_back(x1);
        else if(x2>=0)
            d.push_back(x2);
        else
        {
            cout<<-1<<endl;
            return;
        }
        
        
    }
 
    for(auto &it : d)
        cout<<it<<" ";
    cout<<endl;
 
*/
 
/*
    int n;
    cin>>n;
 
    bool flag = 1; int diff = -1;
    int it = 0;
    for(int i = 0;i<n;i++)
    {
        cin>>it;
 
        while(it%10 != 0 && it%10 != 2)
            it=it+it%10;
 
        if(it%10 != 0)
            it= it%20;
 
        if(diff<0)
            diff = it;
 
        if(diff!=it)
            flag = 0;
 
    } // testing it here as my compiler is misbehaving 
 
    if(flag)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;
 
       */
/*
    int n , k;
    cin>>n>>k;
 
    if(k==1)
    {
        cout<<"YES"<<endl;
        for(int i = 0;i<n;i++)
        {
            cout<<i+1<<endl;
        }
        return;
    }
 
    if(n%2 == 1)
    {
        cout<<"No"<<endl;
        return;
    }
    else
    {
        cout<<"YES"<<endl;
        for(int i = 1;i<=n;i++)
        {
            for(int j = i;j<n*k+1;j+=n)
                cout<<j<<" ";
            cout<<endl;
        }
    }*/
 
   
/*    vector <int> a(300);
    string s ; int p;
    cin>>s>>p;
 
    for(auto &it : s)
        a[it]++ , p-=it-'a'+1;
 
    for(int i = 'z';i>='a';i--)
    {
        while(a[i]&&p<0)
        {
            p+=i-'a'+1;
            --a[i];
        }
    }
    for(auto it : s)
    {
        if(a[it])
        {
            --a[it];
            cout<<it;
        }
    }
 
cout<<endl;*/
 
    int n , q  ,x=0;
    cin>>n>>q;
    vector<int>v(n);
 
   map<int , int> mp;
 
    for(auto &it : v)
        cin>>it;
 
    for(int i = 1;i<n;i++)
    {
       v[x]<v[i]?x=i:x=x;
        mp[x]++;
    }
    mp[x]=1e9;
    for(int i = 0;i<q;i++)
    {
       int num , k;
       cin>>num>>k;
        k-=max(num-2, 0);
        --num;
        cout<<max(min(mp[num] , k) , 0)<<endl;
    }
 
} 
//------------------------------------------------------------------------------------------------------------------  
int main()
{
    GODSPEED
    TEST
    solve();
}