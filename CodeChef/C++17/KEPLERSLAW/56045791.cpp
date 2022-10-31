#include <bits/stdc++.h>
#include<stdlib.h>
#include<sstream>
using namespace std;
// The code is written by Tashvik Srivastava  // 
#define GODSPEED ios_base::sync_with_stdio(0);cin.tie(0); cout.tie(0);
#define TEST int t; cin>>t; while(t--)
#define loop for(int i =0;i<(sizeof(arr)/sizeof(arr[0]));i++)
#define ll long long
#define ld long double
#define all(a) (a).begin(), (a).end()
#define sz(x) ((int)x.size())
const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

int dtob(string s);
int prime(int n);
int strtoi(string s);


int main()
{
GODSPEED
TEST
{
   float t1 , t2 , r1 , r2;
   cin>>t1>>t2>>r1>>r2;
   float k1 = t1*t1/(r1*r1*r1);
   float k2 = t2*t2/(r2*r2*r2);
  
   if(k1==k2)
    cout<<"Yes\n";
    else
      cout<<"No\n";

}

}