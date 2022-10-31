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
       GODSPEED;
     int n;
     cin>>n;
     int arr[n];
     for(int i =0;i<n;i++)
      cin>>arr[i];
    sort(arr , arr+n);
    
    int x = (n-1)/2 - 1;
    int median = abs(arr[x] - arr[x+1]);
    cout<<median<<endl;
   }

 }