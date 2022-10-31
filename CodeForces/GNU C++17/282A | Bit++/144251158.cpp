#include <bits/stdc++.h>
#include <string>
using namespace std;
int main ()
{
    int t ;
    cin>>t;
    int x=0;
  while(t--)
  {
 
 string str ;
 
 cin>>str;
 if(str=="X++")
  x++;
 else if(str=="X--")
  x--;
 else if (str=="++X")
  ++x;
 else
  --x;
 
 
}
 cout<<x<<endl;
}