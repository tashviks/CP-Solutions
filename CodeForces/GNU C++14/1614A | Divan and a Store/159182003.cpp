#include <bits/stdc++.h>
 
using namespace std;
 
#define SPEED ios_base::sync_with_stdio(0);cin.tie(0); cout.tie(0);
#define ar array
#define ll long long
#define ld long double
#define sza(x) ((int)x.size())
#define all(a) (a).begin(), (a).end()
const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;
 
int main()
{
    int t ;
    cin>>t;
    while(t--)
    {
        ll n , l , r , k;
        cin>>n>>l>>r>>k;
        int a[n];
        int i = 0;
         for(int i = 0;i<n;i++)
         {
             cin>>a[i];
         }
        sort(a , a+n);
        
        i =0; int bar_cnt = 0; 
        
        while(i<n)
        {
            if(a[i]>=l&&a[i]<=r)
            {
                if(k>=a[i])
                {
              bar_cnt++; 
              k -= a[i];
                }
            }
            if(k<a[i])
            break;
            i++;
        }
        cout<<bar_cnt<<endl;
    }
}
 