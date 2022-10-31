#include <bits/stdc++.h>
 
using namespace std;
 
#define GODSPEED ios_base::sync_with_stdio(0);cin.tie(0); cout.tie(0);
#define ar array
#define ll long long
#define ld long double
#define sizer(x) ((int)x.size())
#define all(a) (a).begin(), (a).end()
#define sizer(x) ((int)x.size())
const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;
 
 
 
 
 
 
void compute()
{
    ll n;
    cin>>n;
    vector<string> s;
    for(int i=0;i<(n-2);i++) 
    {
        string x;
        cin>>x;
        s.push_back(x);
    }
    string res = "";
    res+=s[0]; 
    ll marker = 1;
    for(int i=1;i<n-2;i++) {
        if(res[sizer(res)-1]!=s[i][0]) 
        {
            res+=s[i];
            marker = 0;
        }
        else
        res+=s[i][1];
    }
    if(sizer(res)!=n)
    {
        if(res[0]=='a') 
           while(sizer(res)<n) 
                res+="b"; 
            
        
        else 
        {
            while(sizer(res)<n) 
                res+="a";
            
        }
    }
    cout<<res<<"\n";
}
 
int main() {
    GODSPEED;
    int t = 1;
    cin >> t;
    for (int i= 1; i <= t; i++)
    {
       
        compute();
    }
}