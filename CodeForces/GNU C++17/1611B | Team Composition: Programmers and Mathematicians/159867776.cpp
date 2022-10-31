 
#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
 
ll t,n,a,b;
int main()
{
    cin>>t;
    while(t--)
    {
      
        cin>>a>>b;
     
       ll sum =0;
       sum = (a+b)/4;
        if(min(a,b)>=sum){
            cout<<sum<<endl;
        }else{
         cout<<min(a,min(b,sum))<<endl;
        }
       
      
    }
 
  
  return 0;
}