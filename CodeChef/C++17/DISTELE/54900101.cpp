#include <bits/stdc++.h>



#define GODSPEED ios_base::sync_with_stdio(0);cin.tie(0); cout.tie(0);
#define ar array
#define END cout<<endl;
#define ll long long
#define ld long double
#define sza(x) ((int)x.size())
#define all(a) (a).begin(), (a).end()
const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;
using namespace std;
int main()
{
    GODSPEED;
    int t ;
    cin>>t;
    
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++)
        cin>>arr[i];
        
        ll int res = 1;
        map<int , int>count;
        for(auto i : arr) //naya naya auto seekha hai ab to har jagah chalegi apni auto
        {
            count[i]++;
        }
        for(auto j : count)
        {
            int f = j.second;
            res *= (f+1);
            res %= MOD;
        }
        res-=1;  // Reduces null
        cout<<res<<endl;
    }
}
