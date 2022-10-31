#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       
       string s;
       cin>>s;
 
  int count= 0;
  int l= s.length();
  
  for(int i = 0; i < l; i++)
  {
    if(s[i ] ==  '1') 
    {
      count++;
    }
  }
  
  int c0;
  c0 = l-count;
  
  if(count != c0) 
  {
    int m = min(count , c0);
    cout <<m<<endl;
  }
  else 
    cout <<count - 1<<endl;
  
}
}