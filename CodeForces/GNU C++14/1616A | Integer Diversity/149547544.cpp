#include <bits/stdc++.h>
 
using namespace std;
#define GODSPEED ios_base::sync_with_stdio(0);cin.tie(0); cout.tie(0);
#define TEST int t; cin>>t; while(t--)
 
#define ll long long
 
 
void compute();
void compute() {
    ll n;
    cin>>n;
    set<ll> st;
    for(ll i=0;i<n;i++) {
        ll t;
        cin>>t;
        ll size = st.size();
        st.insert(t);
        if(size==st.size())
        {
            t*=-1;
            st.insert(t);
        }
    }
    cout<<st.size()<<endl;
}
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc = 1;
    TEST
    {
        compute();
    }
    
}