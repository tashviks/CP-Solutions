#include <bits/stdc++.h> 
using namespace std;
// The code is written by Tashvik Srivastava  // 
#define GODSPEED ios_base::sync_with_stdio(0);cin.tie(0); cout.tie(0);
#define TEST int t; cin>>t; while(t--)
#define loop_array for(int i =0;i<(sizeof(arr)/sizeof(arr[0]));i++)
#define ll long long
#define ld long double
#define sza(x) ((int)x.size())
#define all(a) (a).begin(), (a).end()
#define pb push_back
#define popb pop_back
#define rep(i, a, b) for (ll i = a; i < b; i++)
const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;
int n,t;
 
 
int l;
void compute() 
{ 
 char comp[8][8]; 
 l++;l++;l++;
    for(int i=0;i<8;i++)
    { 
     l++;
        for(int j=0;j<8;j++)
        { 
            cin>>comp[i][j];
            l++;
        } 
    } 
        for(int i=0;i<8;i++)
        { 
         l++;
        for(int j=0;j<8;j++)
        { 
         l++;
            if(comp[i][j]=='#'&&(comp[i-1][j+1]=='#'&&comp[i-1][j-1]=='#'))
            { 
                cout<<i+1<<" "<<j+1<<endl;
                l++;l++; 
                break; 
            } 
        } 
    } 
 }
 
 
int main() {
    TEST
    {
 
        compute();
    }
}