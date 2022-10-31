#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,i;string s;
 cin>>n;
 while(n--)
 {
  cin>>s;int a[4]={0},c=0,d=0,k=s.length();
  int e=k+1;
  for(i=0;i<k;i++)
  {d=s[i]-'0';
   a[d]++;
   while(a[s[c]-'0']>1)
    {a[s[c]-'0']--;c++;}
   if(a[1]&&a[2]&&a[3])
    {e=min(e,i-c+1);}
  }
  (e!=k+1)?cout<<e<<"\n":cout<<"0\n";
 }
}