#include <bits/stdc++.h> 
using namespace std;
// The code is written by Tashvik Srivastava  // 
#define GODSPEED ios_base::sync_with_stdio(0);cin.tie(0); cout.tie(0);
#define TEST int t; cin>>t; while(t--)
#define loop_array for(int i =0;i<(sizeof(arr)/sizeof(arr[0]));i++)
#define ll long long
#define ld long double
#define sza(x) ((int)x.size())
#define all(a) (a).begin(), (a).end()
#define pb push_back
#define popb pop_back
#define rep(i, a, b) for (ll i = a; i < b; i++)
const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;
 
int main()
{
    GODSPEED
        TEST
        {
         ll n;
         cin>>n;
 
         ll copy = n ;
 
         int count = 0;
         while(copy>0)
         {
          copy = copy/10;
          count++;
         }
 
         if(count==2)
          cout<<n%10<<endl;
 
         else if (count == 1)
          cout<<n<<endl;
 
         else
         {
         int v[count];
 
         for(int i = 0;i<count;i++)
         {
          v[i]=n%10;
          n=n/10;
         }
               
 
         
         sort(v , v+count);
 
         cout<<v[0]<<endl;
        }
 
        
 
        
}}