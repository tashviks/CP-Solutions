// #include <bits/stdc++.h> 
// using namespace std;
// // The code is written by Tashvik Srivastava  // 
// #define GODSPEED ios_base::sync_with_stdio(0);cin.tie(0); cout.tie(0);
// #define TEST int t; cin>>t; while(t--)
// #define NoTEST int t = 1; while(t--)
// #define inp(v) for (int i = 0; i < n; ++i) {cin>>temp;v.push_back(temp);}
// #define ll long long
// #define ld long double
// #define sza(x) ((int)x.size())
// #define all(a) (a).begin(), (a).end()
// #define pb push_back
// #define popb pop_back
// #define rep(i, a, b) for (ll i = a; i < b; i++)
// const int MAX_N = 1e5 + 5;
// const ll MOD = 1e9 + 7;
// const ll INF = 1e9;
// const ld EPS = 1e-9;
 
// //first try (time taken about 15 min)
// //best case complexity of O(n)
 
// void solve()
// {
//  int n;
//  cin>>n;
 
//  std::vector<int> a(n);
//  std::vector<int> b(n);
 
//  for(auto &it : a)
//  {
//   cin>>it;
//  }
//  for(auto &it : b)
//  {
//   cin>>it;
//  }
 
//  vector<pair<int,int>>arr(n);
 
//  for (int i = 0; i < n; ++i)
//  {
//   /* code */
//   arr[i]=make_pair(a[i],b[i]);
//  }
 
//  sort(a.begin(), a.end());
//  sort(b.begin(), b.end());
 
//  std::vector<pair<int,int>> res;
 
//  bool flag = false;
 
 
//  for(int i = 0;i<n;i++)
//  {
//   for(int j =0;j<n;j++)
//   {
//    if(arr[j]==make_pair(a[i],b[i]))
//    {
//     swap(arr[i],arr[j]);
//    if(i!=j)
//    {
//     res.emplace_back(i,j);
//     break;
//    }
   
//    }
 
//   }
 
//   if(arr[i]!=make_pair(a[i],b[i])){
 
//    flag = true;
//    break;
 
//   }
 
//  }
 
//  if(flag)
//   cout<<-1<<endl;
//  else
//  {
//   cout<<res.size()<<endl;
//   for(int i = 0;i<res.size();i++)
//   {
//    cout<<res[i].second+1<<" "<<res[i].first+1<<endl;
//   }
//  }
    
//  }
 
 
 
 
 
 
 
 
   
// int main() 
// {
//  GODSPEED
 
//     TEST
//     {
//         solve();
//     }
// }
 
 
 
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
 
void solve()
{
  int n, m;
        cin >> n >> m;
 
        int maxi = 0, maxj = 0;
 
        int grid[n][m];
        
        for (int i = 0; i < n; ++i)
            for (int j = 0; j < m; ++j) {
                cin >> grid[i][j];
                if (grid[i][j] > grid[maxi][maxj])
                    maxi = i, maxj = j;
            }
 
        int h = max(maxi+1, n-maxi);
        int w = max(maxj+1, m-maxj);
        cout << h * w << '\n';
    
 }
 
 
 
 
 
 
 
 
   
int main() 
{
 GODSPEED
 
    TEST
    {
        solve();
    }
}
 