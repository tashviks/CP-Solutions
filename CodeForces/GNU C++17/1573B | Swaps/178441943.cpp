#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--)
{
int n;
cin>>n;
int a[2*n], b[n];
for(int i=0;i<n;i++){
int m;
cin>>m;
a[m]=i;
}
for(int i=0;i<n;i++)cin>>b[i];
int ans=2*n;
int j=0;
for(int i=1;i<2*n;i+=2){
 
while(b[j]<i)j++;
ans=min(ans,a[i]+j);
}
cout<<ans<<endl;
}
}