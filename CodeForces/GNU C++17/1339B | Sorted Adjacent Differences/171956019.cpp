#pragma GCC optimize("O3")
#include<bits/stdc++.h>
#include <ext/pb_ds/detail/standard_policies.hpp>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
 
using namespace std;
using namespace __gnu_pbds;
   
#define ll                  long long
#define ull                 unsigned long long
#define ld                  long double
#define f                   first
#define se                  second
#define SpeedForce          ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define sqr(x)              ((x)*(x))
#define forn(i, n)          for(ll i=0;i<n;++i)
#define forl(i, a, b)       for(ll i=(a);i<=(b);++i)
#define ford(i, a, b)       for(ll i=(a);i>=(b);--i)
#define forg(i, a, b, c)    for(ll i=(a);i<=(b);i += (c))
#define cno                 cout<<"NO";return 0;
#define cye                 cout<<"YES";return 0;
#define pb                  push_back
#define mp                  make_pair
#define fbo                 find_by_order
#define ofk                 order_of_key
#define all(a)              (a).begin(), (a).end()
#define pb1                 pop_back
#define sz(x)               ((int)(x).size())
#define fill(a, x)          memset(a, x, sizeof(a))
#define _read(x)            freopen(x, "r", stdin)
#define _write(x)           freopen(x, "w", stdout)
#define files(x)            _read(x ".in"); _write(x ".out")
#define y1                  qwertytrewq
   
typedef pair < int, int > pii;
typedef pair < char, int > pci;
typedef pair < pii, int > ppii;
typedef pair < ll, ll > pll;
typedef pair < ull, ull > puu;
typedef pair < int, string > pis;
typedef pair < string, int > psi;
typedef map < int, int > mii;
typedef map < int, int > mii;
typedef map < int, char > mic;
typedef map < string, int > msi;
typedef map < string, string > mss;
typedef map < char, int > mci;
typedef map < char, ll > mcl;
typedef map < ll, ll > mll;
typedef map < pii, int > mpii;
typedef vector < int > vi;
typedef vector < vi > vvi;
typedef vector < char > vc;
typedef vector < ll > vll;
typedef vector < pii > vpii;
typedef vector < pll > vpll;
typedef vector < pis > vpis;
typedef map < int, vpii > mivpi;
typedef set < int > si;
typedef set < char > sc;
typedef set < ll > sll;
typedef set< pair < ull, ull > > spuu;
typedef set< pii > spii;
typedef priority_queue< ll > pqll;
   
const int N = 1e6+7;
const int M = 60;
const int MAXK = 1e5+3;
const int Candy = 1e6+3;
const int mod = 1e9 + 7;
//const int mod = 998244353;
//const ll mod = 2e18;
const ll INF = 1e18;
const double PI = 3.1415926535897932384626433;
const ld EPS = 1e-12;
   
   
template <typename T> using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
   
template <typename T> int sgn(T val) {
    return (T(0) < val) - (val < T(0));
}
   
char getChar() { char c = 0; while (c <= ' ') cin >> c; return c; }
   
 
 
ll t, n, a[N];
 
int main(){
    SpeedForce
    cin >> t;
    while(t--){
        cin >> n;
        for(int i = 1; i <= n; i++){
            cin >> a[i];
        }
        int id = (n + 1) / 2;
        sort(a + 1, a + n + 1);
        cout << a[id] << ' ';
        if(n % 2 == 0){
            cout << a[id + 1] << ' ';
        }
        for(int i = id - 1; i; i--){
            cout << a[i] << ' ' << a[n - i + 1] << ' ';
        }
        cout << endl;
    }
    return (!false && !true) || ((ll)((ll)(1713 + 2377 + 1464) * (ll)(1713 + 2377 + 1464) * (ll)(1713 + 2377 + 1464)) != (ll)(171323771464));
}