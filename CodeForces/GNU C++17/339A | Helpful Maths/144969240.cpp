#include <bits/stdc++.h>
using namespace std;
int main()
{
 string s ;
 cin>>s;
 int a[s.length()];
 string str = "";
 int count = s.length()/2;
 
 for(int i =0;i<s.length();i++)
{
 if(s.at(i)=='1')
  a[i]=1;
    else if(s.at(i)=='2')
  a[i]=2;
 else if(s.at(i)=='3')
  a[i]=3;
  
}
sort(a , a+s.length());
 
for(int i =0;i<s.length();i++)
{
if(a[i]!=1 and a[i]!=2 and a[i]!=3)
continue;
else
{
    cout<<a[i];
    if(count>0)
    {
    cout<<'+';
    count--;
    }
 
}
}
}