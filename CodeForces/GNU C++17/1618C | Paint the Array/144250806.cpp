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
 
 
int gcd(int a , int b)
{
    if(a==0)
    return b;
    else 
    return(b%a , a);
}
 
void compute() 
{
    ll n;
    cin>>n;
    vector <ll> a(n);
    for(ll i=0;i<n;i++)
    {
    cin>>a[i];
    }
    ll gcd1 = a[0],gcd2 = a[1];
    for(ll i=0;i<n;i+=2)
    gcd1 = gcd(gcd1,a[i]);
    
    for(ll i=1;i<n;i+=2)
    gcd2 = gcd(gcd2,a[i]);
    
    bool right = 1;
    for(ll i=1;i<n;i+=2)
    {
        if(a[i]%gcd1==0)
        right = 0;
    }
    if(right)
    cout<<gcd1<<"\n";
    
    else
    {
        right = 1;
        for(ll i=0;i<n;i+=2) 
        {
            if(a[i]%gcd2==0)
            right = 0;
        }
        if(right)
        cout<<gcd2<<"\n";
        else
        cout<<0<<"\n";
    }
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