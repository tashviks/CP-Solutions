#include<bits/stdc++.h>
using namespace std;
int t,n,m,a[100005],d[100005];
int main()
 {
 cin>>t;
 while(t--) 
 {
  cin>>n>>m;
  for(int i=1;i<=n;i++)cin>>a[i],d[i]=0;
  int res=1e9;
  for(int i=1;i<=m;i++) 
  {
   int x,y;
   cin>>x>>y;
   d[x]++,d[y]++;
   res=min(res,a[x]+a[y]);
  }
  if(m%2) 
  {
   int ans=1e9;
   for(int i=1;i<=n;i++)
   if(d[i]%2)ans=min(ans,a[i]);
   cout<<min(res,ans)<<endl;
  }
  else puts("0"); 
 }
 return 0;
}