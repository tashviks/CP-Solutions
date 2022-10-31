#include <bits/stdc++.h>
 
using namespace std;
//The code is written by Tashvik Srivastava 
#define GODSPEED ios_base::sync_with_stdio(0);cin.tie(0); cout.tie(0);
#define TEST int t; cin>>t; while(t--)
#define ar array
#define ll long long
#define ld long double
#define sza(x) ((int)x.size())
#define all(a) (a).begin(), (a).end()
const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;
int islucky(int n);
int main()
{
   int n;
   cin>>n;
   GODSPEED;
   int flag = 0;
   if(islucky(n) == 1)
    cout<<"YES";
  else
  {
   for(int i =1;i<n;i++)
   {
    if(n%i == 0)
     {
        if(islucky(i) == 1)
        {
            cout<<"YES"<<endl;
            flag++;
            break;
        }
     }
   }
   if(flag==0)
   cout<<"NO"<<endl;
}
}
 
 
int islucky(int n)
{
    int count = 0;
    int copy = n;
    while(n>0)
    {
        int dig = n%10;
        count++;
        n/=10;
    }
    int flag =0;
    while(copy>0)
    {
        int dig = copy%10;
        if(dig==4 || dig==7)
        flag++;
        copy/=10;
    }
    if(flag==count)
      return 1;
    else
        return 0;
}