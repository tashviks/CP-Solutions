#include <bits/stdc++.h>
using namespace std;
 
int main()
{
       int n,m,g1=0,g2=0,g3=0,s=0;
       cin>>n;
       for (int i=0;i<n;i++)
 
       {
 
              cin>>m;
 
              if (m==4) s++;
 
              else if (m==3) g3++;
 
              else if (m==2) g2++;
 
              else g1++;
 
       }
 
       g1-=g3;
 
       s+=g3;
 
       if (g2%2==0 && g2>0)
 
       {
 
              s+=g2/2;
 
              g2=0;
 
       }
 
       else if (g2%2==1 && g2>0)
 
       {
 
              s+=g2/2+1;
 
              g1-=2;
 
       }
 
       if (g1>0)
 
       {
 
              s+=g1/4;
 
              if (g1%4>0) s++;
 
       }
 
       cout<<s<<endl;
 
       return 0;
 
}