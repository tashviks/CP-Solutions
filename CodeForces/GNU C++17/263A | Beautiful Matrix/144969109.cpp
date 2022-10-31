#include<bits/stdc++.h>
using namespace std;
int main()
{
   int arr[5][5];
   for(int i =0;i<5;i++)
   {
    for(int j =0;j<5;j++)
    {
     cin>>arr[i][j];
    }
   }
   pair<int , int>pair1;
    for(int i =0;i<5;i++)
   {
    for(int j =0;j<5;j++)
    {
     if(arr[i][j]==1){pair1.first=i; pair1.second=j; break;}
  }
   }
   int k = pair1.first ; int l = pair1.second;
   if(k > 2){k=k-2;}
   else {k=2-k;
   }
     if(l > 2){l=l-2;}
   else {l=2-l;
   }
   cout<<k+l;
}
   
   
 