//Template Starts Here
 
//Headers
#include <iostream>
#include <string>
#include <vector>
#include <climits>
#include <algorithm>
#include <cfloat>
#include <sstream>
#include <queue>
#include <deque>
#include <bitset>
#include <iterator>
#include <list>
#include <stack>
#include <map>
#include <unordered_map>
#include <set>
#include <functional>
#include <numeric>
#include <utility>
#include <limits>
#include <time.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <cctype>
 
using namespace std;
 
//For fast I/O
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
#define endl "\n"
 
// Magic
template <typename... T>
void read(T &... args)
{
    ((cin >> args), ...);
}
 
template <typename... T>
void write(T &... args)
{
    ((cout << args << " "), ...);
}
 
// For printing
#define p1(a) cout << a << " "
#define p11(a) cout << a << "\n"
#define p2(a, b) cout << a << " " << b << "\n"
#define p3(a, b, c) cout << a << " " << b << " " << c << "\n"
#define p4(a, b, c, d) cout << a << " " << b << " " << c << " " << d << "\n"
#define p5(a, b, c, d, e) cout << a << " " << b << " " << c << " " << d << " " << e << "\n"
 
#define fsp(n) fixed << setprecision(n)
 
#define pfi(x) printf("%d\n", x);
#define pfi2(x, y) printf("%d %d\n", x, y);
#define pfi3(x, y, z) printf("%d %d %d\n", x, y, z);
 
#define pfl(x) printf("%lld\n", x);
#define pfl2(x, y) printf("%lld %lld\n", x, y);
#define pfl3(x, y, z) printf("%lld %lld %lld\n", x, y, z);
 
#define pfs(x) printf("%s\n", x);
#define pfs2(x, y) printf("%s %s\n", x, y);
#define pfs3(x, y, z) printf("%s %s %s\n", x, y, z);
 
#define sa(arr, n) \
    f0(i, n) { cin >> arr[i]; }
#define pa(arr, n)                      \
    f0(i, n) { cout << arr[i] << " "; } \
    cout << "\n";
 
//Scanf
#define sf1(a) scanf("%d", &a)
#define sf2(a, b) scanf("%d %d", &a, &b)
#define sf3(a, b, c) scanf("%d %d %d", &a, &b, &c)
#define sf4(a, b, c, d) scanf("%d %d %d %d", &a, &b, &c, &d)
#define sf5(a, b, c, d, e) scanf("%d %d %d %d %d", &a, &b, &c, &d, &e)
#define sf1l(a) scanf("%I64d", &a)
#define sf2l(a, b) scanf("%I64d %I64d", &a, &b)
#define sf3l(a, b, c) scanf("%I64d %I64d %I64d", &a, &b, &c)
#define sf4l(a, b, c, d) scanf("%I64d %I64d %I64d %I64d", &a, &b, &c, &d)
#define sf5l(a, b, c, d, e) scanf("%I64d %I64d %I64d %I64d %I64d", &a, &b, &c, &d, &e)
 
// Short Forms
#define ld long double
#define F first
#define S second
#define pb push_back
#define eb emplace_back
#define all(x) (x).begin(), (x).end()
#define al(x, n) (x), (x) + n
#define mp make_pair
#define sz size()
#define clr clear()
#define len length()
 
// Constant
#define Mod 1000000007
#define Mod2 998244353
#define INF 2147483647
const double PI = 3.14159265358979323846264338327950288419716939937510582097494459230;
const int dx4[] = {-1, 0, 1, 0};
const int dy4[] = {0, 1, 0, -1};
const int dx8[] = {-1, 0, 1, 0, -1, -1, 1, 1};
const int dy8[] = {0, 1, 0, -1, -1, 1, -1, 1};
 
// Self Defined
#define gcd __gcd
#define lcm(a, b) (a * b) / gcd(a, b)
#define rsort(r) sort(r, greater<ll>())
#define ABS(r) ((r) < 0 ? -(r) : (r))
#define deb(x) cout << ">> " << #x << " : " << x << endl;
 
// Max - Min
#define max3(a, b, c) max(max(a, b), c)
#define min3(a, b, c) min(min(a, b), c)
#define max4(a, b, c, d) max(a, max3(b, c, d))
#define min4(a, b, c, d) min(a, min3(b, c, d))
#define max5(a, b, c, d, e) max(max4(a, b, c, d), e)
#define min5(a, b, c, d, e) min(min4(a, b, c, d), e)
#define maxa(v) *max_element(v, v + v.size())
#define mina(v) *min_element(v, v + v.size())
 
//Loops
#define f0(i, n) for (ll i = 0; i < n; i++)
#define f1(i, n) for (ll i = 1; i <= n; i++)
#define f3(i, n) for (ll i = n - 1; i >= 0; i--)
#define f4(i, n) for (ll i = n; i > 0; i--)
 
// Type Def Start
typedef long long int ll;
typedef map<string, int> msi;
typedef map<int, int> mii;
typedef map<ll, ll> mll;
typedef map<char, int> mci;
typedef map<int, string> mis;
 
typedef unordered_map<string, int> usi;
typedef unordered_map<int, int> uii;
typedef unordered_map<ll, ll> ull;
typedef unordered_map<char, int> uci;
typedef unordered_map<int, string> uis;
 
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef pair<string, int> psi;
typedef pair<string, string> pss;
typedef pair<int, pii> tri;
typedef pair<double, double> pd;
 
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<ll> vl;
typedef vector<string> vs;
typedef vector<char> vc;
typedef vector<bool> vb;
typedef vector<pii> vpi;
 
typedef priority_queue<int, vector<int>, greater<int>> rpq;
typedef priority_queue<int> pq;
 
typedef set<int> si;
typedef set<ll> sl;
 
// Defined
#define test()        \
    ll test_case;     \
    cin >> test_case; \
    while (test_case--)
#define inp1(n)      \
    ll n;            \
    cin >> n;        \
    ll arr[n] = {0}; \
    f0(i, n) { cin >> arr[i]; }
#define inp2(n, k)    \
    int n, k;         \
    cin >> n;         \
    cin >> k;         \
    int arr[n] = {0}; \
    f0(i, n) { cin >> arr[i]; }
 
//Funtions
// template <typename T>
// int to_int(T num)
// {
//     int val;
//     stringstream stream;
//     stream << num;
//     stream >> val;
//     return val;
// }
// ll gcd(ll a, ll b)
// {
//     return (b ? gcd(b, a % b) : a);
// }
// bool isPrime(ll n)
// {
//     if (n < 2)
//         return false;
//     for (ll i = 2; i * i <= n; i++)
//         if (n % i == 0)
//             return false;
//     return true;
// }
// bool isPowerTwo(ll x)
// {
//     return (x && !(x & (x - 1)));
// };
// bool isSubstring(string s1, string s2)
// {
//     if (s1.find(s2) != string::npos)
//         return true;
//     return false;
// }
 
// int Solve(int n, int k)
// {
//     if (n == 1 && k == 1)
//         return 0;
//     int mid = pow(2, n - 1) / 2;
//     if (k <= mid)
//         return Solve(n - 1, k);
//     else
//         return !Solve(n - 1, k - mid);
// }
 
// int Solve2(int n, int k)
// {
//     if (n == 1)
//         return 0;
//     return (k % 2 == 0) ^ Solve2(n - 1, k + 1 / 2);
// }
 
// ll mod = 1e9 + 7;
 
// ll fast_pow(ll a, ll p)
// {
//     ll res = 1;
//     while (p)
//     {
//         if (p % 2 == 0)
//         {
//             a = a * 1ll * a % mod;
//             p /= 2;
//         }
//         else
//         {
//             res = res * 1ll * a % mod;
//             p--;
//         }
//     }
//     return res;
// }
 
// ll fact(ll n)
// {
//     ll res = 1;
//     for (ll i = 1; i <= n; i++)
//     {
//         res = res * 1ll * i % mod;
//     }
//     return res;
// }
 
// ll nCr(ll n, ll k)
// {
//     return fact(n) * 1ll * fast_pow(fact(k), mod - 2) % mod * 1ll * fast_pow(fact(n - k), mod - 2) % mod;
// }
 
// are all of the elements positive?
// all_of(first, first + n, ispositive());
// // is there at least one positive element?
// any_of(first, first + n, ispositive());
// // are none of the elements positive?
// none_of(first, first + n, ispositive());
 
// copy 5 elements from source to target
//copy_n(source, 5, target);
 
// iota(c, c + 3, 'a'); // {'a', 'b', 'c'}
 
string stringMul(string s, ll m)
{
    string sm = "";
    for (ll x = 0; x < m; x++)
        sm += s;
    return sm;
}
 
//Template Completed
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
ll canPallindrome(string s)
{
    unordered_map<char, ll> uc;
    for (auto c : s)
    {
        uc[c]++;
    }
    ll f = 0;
    for (auto x : uc)
    {
        if (x.second & 1)
            f++;
    }
    return f;
}
void sol4()
{
    string s;
    cin >> s;
    ll f = canPallindrome(s);
    (f == 0 || f == 1 || f % 2 == 1) ? cout << "First\n" : cout << "Second\n";
}
void sol3()
{
    ll n, k;
    cin >> n >> k;
    ll arr[n];
    ll f = 0;
    for (ll x = 0; x < n; x++)
    {
        cin >> arr[x];
        if (arr[x] > k)
            f = 1;
    }
    sort(arr, arr + n);
    if (!f || arr[0] + arr[1] <= k)
        cout << "YES\n";
    else
        cout << "NO\n";
}
void sol2()
{
    ll n;
    cin >> n;
    ll arr[n];
    for (ll x = 0; x < n; x++)
        cin >> arr[x];
}
 
void sol()
{
    ll n;
    cin >> n;
}
 
int main()
{
    // fast;
    // test()
    {
        sol4();
    }
}