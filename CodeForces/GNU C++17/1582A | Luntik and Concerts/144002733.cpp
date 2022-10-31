#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int a , b ,c , sum=0;
        cin>>a>>b>>c;
        int at = a*1;
        int bt = b*2;
        int ct = c*3;
        int max = at+bt+ct;
       if(max%2==0)
       cout<<0<<endl;
       else 
       cout<<1<<endl;
     }
    
}