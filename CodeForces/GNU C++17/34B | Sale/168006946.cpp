#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
#define getarray(z, n) for(int i=0; i<n; i++){cin>>z[i];}
#define putarray(z, n) for(int i=0; i<n; i++){cout<<z[i]<<" ";}
#define testcases int t=1; cin>>t; while(t--)
#define pub push_back 
#define pob pop_back()
#define loop(i, a, b) for(ll i=a; i<b; i++)
#define ll long long
#define llvec vector<long long>
#define sortall(x) sort(x.begin(), x.end())
#define Abhi_Solve_Krke_Deta_Hu void Bhai_Solve_Krdo_Ise
#define print_kar(x) cout<<x<<nl;
#define sort(a) sort(a, a+n)
 
void solve(){
 int n, m; cin>>n>>m;
 int a[n]; getarray(a, n); sort(a);
 ll money = 0, ct = 0;
 loop(i, 0, n){
  if(a[i]<0 && ct<m){money+=abs(a[i]); ct++;}
 }
 
 cout<<money;
}
 
 
int main(){
 //testcases{
  solve();
 //a}
}