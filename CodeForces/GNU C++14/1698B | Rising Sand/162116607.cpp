#include <bits/stdc++.h> 
using namespace std;
// The code is written by Tashvik Srivastava  // 
#define GODSPEED ios_base::sync_with_stdio(0);cin.tie(0); cout.tie(0);
#define TEST int t; cin>>t; while(t--)
#define NoTEST int t = 1; while(t--)
#define inp(v) for (int i = 0; i < n; ++i) {cin>>temp;v.push_back(temp);}
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
 
//first try (time taken about 15 min)
//best case complexity of O(n)
 
int myXOR(int x, int y);
 
void solve()
{
 int xyz = 0;
 
 int nt ,n, k;
 xyz++;
        cin >> n >> k;
        int counter = 0;
        xyz++;
        int arr[n];
        xyz++;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 1; i < n - 1; i++)
        {
            if (arr[i] > arr[i - 1] + arr[i + 1])
                counter++;
        }
        if (k == 1)
        {
            counter = ((n + 1) / 2) - 1;
            xyz++;xyz++;
            cout << counter << endl;
            xyz++;xyz++;
        }
        else
        {
            cout << counter << endl;
            xyz++;xyz++;
        }
    }
    
 
    
 
 
 
 
 
 
   
int main() 
{
 GODSPEED
 
    TEST
    {
        solve();
    }
}
 
 