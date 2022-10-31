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
 
//to find if given sum is sum of pairs in an array     
int FindPairSum(std::vector<int> A, int N, int SUM){
 int i = 0;int j = N - 1;
 while (i < j) {if (A[i] + A[j] == SUM)  return 1;
       else if (A[i] + A[j] < SUM)  i++;
       else       j--;
      }
       return 0;     }
 
 
int isPalin(int n);
 
void solve()
{
 ll N;
        cin >> N;
        string S;
        cin >> S;
        vector<ll> Ans(N);
        vector<ll> Array(N);
        for (ll i = 0; i < N; i++)
        {
            Array[i] = S[i] - '0';
        }
        if (Array[0] != 9)
        {
            ll left = 0, right = N - 1;
            while (left < right)
            {
                Ans[left] = 9 - Array[left];
                Ans[right] = 9 - Array[right];
                left++;
                right--;
            }
            for (ll i = 0; i < N; i++)
                cout << Ans[i];
            cout << "\n";
            return;
        }
        vector<ll> Temp(N + 1, 1);
        for (int i = N - 1; i >= 0; i--)
        {
            if (Array[i] <= Temp[i + 1])
                Ans[i] = Temp[i + 1] - Array[i];
            else
            {
                Temp[i]--;
                Ans[i] = 10 + Temp[i + 1] - Array[i];
            }
        }
        for (auto x : Ans)
            cout << x;
        cout << "\n";
        ;
 
}
 
int isPalin(int n)
{
 int copy = n;
 
 int rem , rev = 0;
 
 while(n>0)
 {
  rem = n%10;
  rev = rev*10+rem;
  n/=10;
 
 }
 
 if(copy==rev)
  return 1;
 else
  return 0;
}
 
 
 
 
 
   
int main() 
{
 GODSPEED
 
    TEST
    {
        solve();
    }
}
 
 