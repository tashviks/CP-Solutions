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
 
int main() {
 GODSPEED
  TEST {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    int ones = 0, p1_first = n, p1_last = -1;
    for (int p = 0; p < n; p++) {
      if (s[p] != '1')
        continue;
      ones += 1;
      if (p1_first == n)
        p1_first = p;
      p1_last = p;
    }
    int add = 0;
    // moving the last one to last position
    if (ones > 0 and (n - 1 - p1_last) <= k) {
      k -= (n - 1 - p1_last);
      add += 1;
      ones -= 1;
    }
    // moving the first one to first position
    if (ones > 0 and p1_first <= k) {
      k -= (p1_first);
      add += 10;
      ones -= 1;
    }
    cout << 11 * ones + add << "\n";
  }
  return 0;
}