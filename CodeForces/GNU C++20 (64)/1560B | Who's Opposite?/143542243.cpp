#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main ()
{
 int n ; int line =0;
 cin>>n;
 while(n--)
 {
  int a , b , c;
  cin>>a>>b>>c;
  if(min(a,b)+1 ==max(a,b)  || max(a,b)>(max(a,b)-min(a,b))*2  || c>(max(a,b)-min(a,b))*2 )
  cout<<-1<<endl;
  else
  {
  
   line  = (max(a,b)-min(a,b));
  if(c<=line)
  cout<<abs(line+c)<<endl;
  else
  cout<<abs(line-c)<<endl;
 }
 }
}