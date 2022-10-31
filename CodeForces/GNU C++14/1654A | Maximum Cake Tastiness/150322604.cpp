#include <iostream> 
#include<bits/stdc++.h> 
using namespace std; 
#define ull unsigned long long 
#define ll long long 
#define ld long double 
#define pii pair<int,int> 
#define um unordered_map<int,int> 
#define mii map<int, int> 
#define vi vector<int> 
#define vll vector<long long> 
#define pq priority_queue<int> 
#define si stack<int> 
#define hi cout<<"hello"<<endl 
#define MOD 1000000007 
#define rep(i,a,b) for(int i = a;i<b;i++) 
#define precision(a) cout<<setprecision(a)<<fixed 
#define pb push_back 
#define amax(a,b) a=max(a,b) 
#define amin(a,b) a=min(a,b) 
#define TEST int t; cin>>t; while(t--)
#define SPEED ios_base::sync_with_stdio(false); cin.tie(0);
int main(){ 
   
    TEST
    { 
        ll n ;
        cin>>n;
        std::vector<ll> v;  
        ll x;
        for (int i = 0; i < n; ++i)
        {
            cin>>x;
            v.push_back(x);
        }
        sort(v.begin(), v.end() , greater<int>());
 
        cout<<v[0]+v[1]<<endl;
    } 
    return 0; 
}