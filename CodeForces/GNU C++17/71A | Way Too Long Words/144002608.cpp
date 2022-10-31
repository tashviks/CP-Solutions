#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int t; 
    cin>>t;
    
while(t--)
{
string s ;
cin>>s;
int l = s.length();
 
if( l>10)
{
    cout<<s.at(0)<<l-2<<s.at(l-1)<<endl;
    
}
else
cout<<s<<endl;
 
}
}