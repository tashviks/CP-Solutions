#include<bits/stdc++.h>
#define ll long long 
 
using namespace std;
 
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    string str;
    cin>>str;
    if(str.find('R')>str.find('r') and str.find('B')>str.find('b') and str.find('G')>str.find('g'))
      cout<<"YES"<<endl;
    else
      cout<<"NO"<<endl;
  }
}