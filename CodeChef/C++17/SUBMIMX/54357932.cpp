#include<bits/stdc++.h>
using namespace std;
#define ll long long

void compute()
{
    ll n,m,sum,x,z,y,cnt=0;
    cin>>n>>m;
    x=n-m;
    if(x<=m+1)
    cout<<x;
    else
    {
        y=x/(m+1);
        z=(x)%(m+1);
        ll cnty=(m+1)-z;
        ll cntx=y+1;
        sum=cnty * (y) * (y+1) /2 + z * (y+1) * (y+2) / 2;
        cout<<sum; 
    }
    cout<<"\n";
}
int main(){
   int t;
   cin>>t;
   while(t--){
       compute();
   }
   return 0;
}