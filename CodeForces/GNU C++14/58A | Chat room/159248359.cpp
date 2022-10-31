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
    GODSPEED;
   
        string s;
        cin>>s;
 
        string str = "hello";
 
        int k = -1; 
        int count = 0;
 
        for(int i = 0;i<5;i++)
        {
         for(int j=k+1;j<s.length();j++)
         {
          if(str.at(i)==s.at(j))
          {
           count++;
           k=j;
           break;
          }
 
         }
        }
 
        if(count>=5)
         cout<<"YES "<<endl;
        else
         cout<<"NO"<<endl;
        
 
        
}