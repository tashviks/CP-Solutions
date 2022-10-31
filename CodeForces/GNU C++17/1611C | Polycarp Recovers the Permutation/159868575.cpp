#include "bits/stdc++.h"
 
using namespace std;
#define ll               long long
 
#define rep(i,a,b)        for(int i=a;i<b;i++)
#define test int t; cin>>t; while(t--)
#define GODSPEED ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
typedef long double ld;
#define mod 1000000007
#define inf 1e17
#define endl '\n'
 
ll max(ll i , ll j) {
 if (i > j)return i;
 else return j;
}
ll min(ll i , ll j) {
 if (i < j)return i;
 else return j;
}
 
void solve() {
    //write your code here
    int n;
cin >> n;
 
vector<int> a(n);
 
for(int i=0;i<n;i++)
cin>>a[i];
 
if (a[0] != n && a[n - 1] != n)
{
    cout << "-1\n";
    return;
}
 
if (a[0] != n)
    reverse(a.begin(), a.end() - 1);
else
    reverse(a.begin() + 1, a.end());
 
for(int i=0;i<n;i++) 
cout << a[i] << " ";
 
cout << endl;
 
    cout<<"\n";
 }
 
signed main()
{
 GODSPEED
 
 
 test{
  solve();
 }
 
 
 
}