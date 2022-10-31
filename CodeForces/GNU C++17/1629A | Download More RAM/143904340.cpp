#include <bits/stdc++.h> 
 
using namespace std;
 
// JAI BAJRANG BALI // 
 
#define LOTS ios_base::sync_with_stdio(0);cin.tie(0); cout.tie(0);
 
#define TEST int t; cin>>t; while(t--)
 
 
#define ll long long
 
 
#define arrayloop for(int i =0;i<(sizeof(arr)/sizeof(arr[0]));i++)
 
#define ld long double
 
#define sza(x) ((int)x.size())
 
#define pb push_back
 
#define allof(a) (a).begin(), (a).end()
 
#define popb pop_back 
 
#define mp(a,b) make_pair(a,b)
 
#define rep(i, a, b) for (ll i = a; i < b; i++)
 
const int MAX = 1e5 + 5;
 
const ll MODULO = 1e9 + 7;
 
const ll INFINITE = 1e9;
 
const ld EP = 1e-9;
 
int main()
{
    LOTS
    TEST                                                        
    {
        int n, k;
        cin>>n>>k;
       pair<int,int>a[n];
 
 
        int x;
        for(int i = 0;i<n;i++)
        {
            cin>>a[i].first;
 
        }
         for(int i = 0;i<n;i++)
        {
            cin>>a[i].second;
 
        }
 
         sort(a , a+n);
         for(int i =0;i<n;i++)
         {
            if(a[i].first<=k)
                k = k+a[i].second;
            else
                break;
         }
         cout<<k<<endl;
        
 
        
 
 
        
    }
 
}
 
 
   