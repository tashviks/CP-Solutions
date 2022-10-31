 
#include<bits/stdc++.h> 
using namespace std; 
#define ll long long
#define TEST int t; cin>>t; while(t--)
#define SPEED ios_base::sync_with_stdio(false); cin.tie(0);
 
 
int main()
{ 
SPEED;
 
    int abs;
    TEST
    { 
        int n;
        cin>>n;
        int arr[n];
 
        for(int i =0;i<n;i++)
        {
            cin>>arr[i];
        }
 
        int pos , posb;
 
        for(int i = 0;i<n;i++)
        {
            if(arr[i]!=(i+1))
            {
                pos = i;
                break;
            }
        }
        
 
            for(int i=0;i<n;i++)
            {
                if((arr[i]) == pos+1)
                {
                    posb = i;
                    break;
                }
            }
                    
               for(int i = 0;i<n;i++)
               {
                   if(i==pos)
                   {
                       for(int j = posb;j>=pos;j--)
                       {
                       cout<<arr[j]<<" ";
                       i++;
                       }
                       i--;
                   }
                   else
                   cout<<arr[i]<<" ";
                   
            
                   
               }
               cout<<endl;
 
                  
 
 
      }
 
}