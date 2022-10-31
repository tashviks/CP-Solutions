#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int l , r , k;
        cin>>l>>r>>k;
        int moves = (r-l+1)-((r/2)-(l-1)/2) ;             
        
        if(moves<=k)
        {
            cout<<"YES"<<endl;
        }
       else if(l==r)
        {
            if(l!=1)
            cout<<"YES"<<endl;
            else
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        
        
    }
}