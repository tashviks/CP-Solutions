#include <bits/stdc++.h>
using namespace std;
// The code is written by Tashvik Srivastava  // 
#define GODSPEED ios_base::sync_with_stdio(0);cin.tie(0); cout.tie(0);
#define TEST int t; cin>>t; while(t--)
#define loop1 for(int i =0;i<(sizeof(arr)/sizeof(arr[0]));i++)
#define ll long long
#define ld long double
#define sza(x) ((int)x.size())
#define all(a) (a).begin(), (a).end()
 
const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;
 
int distinct(int n );
int main()
{ 
 
  int n;
  cin>>n;
  int i = n;
  while(i++)
  {
    if(distinct(i)==1)
    {
      cout<<i;
      break;
    }
    
  }
 
 }
 
// int distinct(int n)                                  //Complexity is O(n^2)
// {          
//   string s = to_string(n);                                 
//   for(int i =0;i<s.length()-1;i++)
//   {
//     for(int j = i+1;j<s.length();j++)
//     {
//        if(s.at(i)==s.at(j))
//         return 0;
//     }
//   }
//   return 1;
// }
 
 
 
int distinct(int n)                                 //Complexity is O(1)
{    
       
        string s = to_string(n);
       
        set<int> uniDigits(s.begin(), s.end());
       
        if (s.size() == uniDigits.size()) 
        {
            return 1;
        }
        return 0;
    }