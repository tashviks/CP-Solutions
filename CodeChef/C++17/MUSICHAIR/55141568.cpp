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
   TEST
   {
     int n;
     cin>>n;
      n=n-1;
    int c = 0;
    for(int i =1;i*i<n;i++) 
    {
        if(n%i==0)
        c+=2;
    }
    if(pow((int)sqrt(n),2)==n)
    c+=1;
    cout<<c<<"\n";

   }

 }