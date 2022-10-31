#include <bits/stdc++.h>
 
using namespace std;
 
#define GODSPEED ios_base::sync_with_stdio(0);cin.tie(0); cout.tie(0);
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
    int n , t;
    cin>>n>>t;
    string str;
    cin>>str;
     
        while(t--)
        {
            for(int i = 0;i<n-1;i++)
            {
        if(str.at(i)=='B' && str.at(i+1)=='G')
           {
            char ch = str.at(i);
            str.at(i) = str.at(i+1);
            str.at(i+1) = ch;
            i++;
           }
    
          }
          
        }
    
    cout<<str<<endl;
    
}