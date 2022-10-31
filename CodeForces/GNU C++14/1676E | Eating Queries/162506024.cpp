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
#define inpvec(v) for(auto &it : v) cin>>it;
#define rep(i, a, b) for (ll i = a; i < b; i++)
const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;
 
 
//first try (time taken about 15 min)
//best case complexity of O(n)
 
//to find if given sum is sum of pairs in an array 
 
//-----------------------------------------------------------------------------------------------------------    
int FindPairSum(std::vector<int> A, int N, int SUM)
{
 int i = 0;int j = N - 1;
 while (i < j) {if (A[i] + A[j] == SUM)  return 1;
       else if (A[i] + A[j] < SUM)  i++;
       else       j--;
      }
       return 0;     
}
//---------------------------------------------------------------------------------------------------------
int vecsum(std::vector<int> v , int n)
{
 int sum = 0;
 rep(i,0,n)
 {
  sum+=v[i];
 }
 return sum;
}
//--------------------------------------------------------------------------------------------------------------
vector<int> prefixsum(std::vector<int> v , int n)
{
 std::vector<int> r;
 r[0]=v[0];
 for (int i = 1; i < n; ++i)
 {
  /* code */
  r[i]=r[i-1]+v[i];
 
 }
 
 return r;
 
}
//--------------------------------------------------------------------------------------------------------------
 
void solve()
{
 int n , q;
 cin>>n>>q;
 std::vector<int> v(n);
 
 for(auto &it : v)
  cin>>it;
 
 sort(v.begin(), v.end() , greater<int>());
 std::vector<int> p(n);
 p[0]=v[0];
 for (int i = 1; i < n; ++i)
 {
  /* code */
  p[i]=p[i-1]+v[i];
 
 }
 
 int x , mid;
 
 while(q--) {
            long long x; cin >> x;
            int l = 1, r = n, ans = -1;
            while(l <= r) {
                int mid = (l + r) / 2;
                if(p[mid - 1] >= x) {
                    ans = mid;
                    r = mid - 1;
                } else {
                    l = mid + 1;
                }
            }
            cout << ans << "\n";
        }
 
 
  
 }
 
//----------------------------------------------------------------------------------------------------------
 
  
 
 
 
 
 
 
   
int main() 
{
 GODSPEED
 
    TEST
    {
        solve();
    }
}
 
 