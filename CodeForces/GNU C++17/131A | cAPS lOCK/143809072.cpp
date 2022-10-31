#include <bits/stdc++.h>
 
using namespace std;
//The code is written by Tashvik Srivastava 
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
 
int main()
{
   string s;
   cin>>s;
   int l = s.length();
   char ch = s.at(0);
   int c1 = 0 , c2 = 1;
   for(int i = 0;i<l;i++)
   {
    if(isupper(ch))
    {
      if(isupper(s.at(i)))
        c1++;
    }
    else
    {
      if(isupper(s.at(i)))
        c2++;
    }
   }
  if(c1==l or c2==l)
  {
    for(int i = 0;i<s.length();i++)
    {
      if(isupper(s.at(i)))
        cout<<(char)tolower(s.at(i));
      else
         cout<<(char)toupper(s.at(i));
    }
  }
  else 
    cout<<s;
 
 
   }