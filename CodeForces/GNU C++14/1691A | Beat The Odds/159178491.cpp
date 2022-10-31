#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   cin>>t;
   while(t--)
    {
     vector<int> v; int x;
     int n ;
     cin>>n;
     for(int i =0;i<n;i++)
     {
      cin>>x;
      v.push_back(x);
     }
     int ceven = 0 , codd = 0;
     for(int i =0;i<n;i++)
     {
      if(v[i]%2==0)
       ceven++;
      else
       codd++;
     }
 
     if(ceven<codd)
      cout<<ceven<<endl;
     else
      cout<<codd<<"\n";
    }
  
    
}
 