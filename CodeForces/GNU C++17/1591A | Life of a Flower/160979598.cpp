#include <bits/stdc++.h>
 
using namespace std;
 
#define GODSPEED ios_base::sync_with_stdio(0);cin.tie(0); cout.tie(0);
#define T_C  int t;cin>>t;while(t--)
#define ar array
#define ll long long
#define ld long double
#define sza(x) ((int)x.size())
#define all(a) (a).begin(), (a).end()
const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;
 
void compute() 
{
    int n;
    cin>>n;
    int res = 1;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    if(a[0]==1)
    res+=1;
    for(int i=1;i<n;i++) {
        if(a[i]==1) {
            if(a[i-1]==1)
            res+=4;
            res+=1;
        }
        else {
            if(a[i-1]==0) {
                res = -1;
                break;
            }
        }
    }
    cout<<res<<"\n";
}
 
int main() {
 GODSPEED;
    int t;
    cin >> t;
    while(t-- )
        compute();
    }
 