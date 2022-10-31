
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
    int x , y ;
    cin>>x>>y;
    
   int x1 = x%2;
   int y2 = y%2;
   if(x==0&&y2!=0)
   cout<<"NO"<<endl;
   else
   {
   
   if(x1==0&y2==0)
   cout<<"YES"<<endl;
   else if(x1==0&y2!=0)
   cout<<"YES"<<endl;
   else if(x1!=0&y2==0)
   cout<<"NO"<<endl;
   else if(x1!=0&y2!=0)
   cout<<"NO"<<endl;
   }
    }
 return 0;
}