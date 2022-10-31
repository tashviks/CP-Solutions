#include <bits/stdc++.h>
 
using namespace std;
long long n,q,a[200006],v[200006],s,i,x,t,e,l;
int main()
{    ios_base::sync_with_stdio(false);
cin>>n>>q;
 
for(i=0;i<n;i++)
{cin>>a[i];s+=a[i];}
 
while(q--)
{
cin>>t;
if(t==1){
cin>>i>>x;i--;
if(v[i]!=e)
    s+=x-l;
else 
    s+=x-a[i];
a[i]=x;
v[i]=e;
}
else
{  cin>>x;
   e++;
   l=x;
   s=n*x;
}
cout<<s<<endl;
 
}
 
 
    return 0;
}