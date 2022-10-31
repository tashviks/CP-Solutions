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

using namespace std;
int main()
{
    GODSPEED;
    int t ;
    cin>>t;
    
    while(t--)
    {
        int n , k;
        cin>>n>>k;
        string s;
        cin>>s;
        int nap =0;
        int count = 0;
        for(int i =0;i<s.length();i++)
        {
            if(s.at(i)=='0')
            count++;
            else if(s.at(i) == '1')
            count = 0;
            if(count == k)
            {
            nap++;
            count = 0;
            }
       
        }
        cout<<nap<<endl;
        
        
    }
}