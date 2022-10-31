#include<bits/stdc++.h>
using namespace std;
int t,n,k,i,j,a[200];
char s[200];
int main()
{
 
 cin>>t;
 while(t--)
          {
  cin>>n>>k>>(s+1);
 
  memset(a,0,sizeof a);
 
  for(i=1;i<=n;i++)
                     a[(int)s[i]]++;
  for(i=1;i<=k;i++)
                {
          for(j=97;a[j]&&j<97+n/k;j++)
                        a[j]--;
   cout<<(char)j;
  }
  cout<<"\n";
 }
}