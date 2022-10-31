#include <bits/stdc++.h>
using namespace std;

int main() {
 int t ;
 cin>>t;
 while(t--)
 {
     int n , x ,c=0 , o=0;
     cin>>n;
     
     for(int i=0;i<n;i++)
     {
        cin>>x;
        if(x%2==0)
        c++;
        else 
        o++;
     }
     
    if(c==n)
     cout<<"0"<<endl;
     else
     {
       cout<<o/2<<endl; 
     }
 }
}