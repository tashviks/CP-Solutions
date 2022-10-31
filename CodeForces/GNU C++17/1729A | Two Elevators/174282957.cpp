#include<bits/stdc++.h>
using namespace std;
int main()
{
int t,a,b,c,d,ans;
cin>>t;
while(t--)
{
cin>>a>>b>>c;
d=a-1;
ans=abs(b-c)+c-1;
cout<<(d<ans?1:(d>ans?2:3))<<endl;
}
}