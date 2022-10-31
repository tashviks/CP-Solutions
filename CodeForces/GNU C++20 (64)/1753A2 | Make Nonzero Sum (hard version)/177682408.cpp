#include<bits/stdc++.h>
using namespace std;
int main(){
 ios::sync_with_stdio(0);
 cin.tie(0);
 int t;
 cin>>t;
 while(t--)
{
  int n;
  cin>>n;
  int a[n+5],b[n+5]={0},s=0;
  for(int i=1;i<=n;i++)
{
   cin>>a[i];
   s+=a[i];
  }
  if(s%2)
{
   cout<<-1<<endl;
   continue;
  }
  for(int i=2;i<=n;i++)
{
   if(s==0)
break;
   if(b[i-1]==1 or a[i]==0)
continue;
   if((s>0) ^(a[i]==-1))
{
    b[i]=1;
    if(s>0)s-=2;
    else s+=2;
   }
  }
  vector<pair<int,int>>p;
  int pos=1;
  for(int i=2;i<=n;i++)
{
   if(b[i]==0 and b[i-1]==0)
{
    p.push_back({pos,i-1});
    pos=i;
   }
  }
  p.push_back({pos,n});
  cout<<p.size()<<endl;
  for(auto it:p)
{
   cout<<it.first<<' '<<it.second<<endl;
  }
 } 
}