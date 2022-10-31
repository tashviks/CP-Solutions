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
void compute();
 
void compute() {
    vector <ll> a(7);
    for(ll i=0;i<7;i++)
    cin>>a[i];
    cout<<a[0]<<" "<<a[1]<<" ";
    if(a[2]!=a[0]+a[1])
    cout<<a[2];
    else
    cout<<a[3];
    cout<<endl;
}
 
int main() {
    GODSPEED
    int t ;
    cin >> t;
    for (int i = 0; i <t; i++) {
        compute();
    }
}