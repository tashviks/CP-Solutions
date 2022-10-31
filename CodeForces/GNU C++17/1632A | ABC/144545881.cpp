#include <bits/stdc++.h> 
 
using namespace std;
 
// JAI BAJRANG BALI QUESTION DEKH K MERI FATI // 
 
 
int main()
{
    
    
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int c0 = 0 , c1 = 0;
        for(int i = 0;i<n;i++)
        {
            if(s.at(i)==0)
            c0++;
            else
            c1++;
        }
        if(n>2)
            cout<<"NO"<<endl;
        else if(n==1)
            cout<<"YES"<<endl;
        else if(s=="10")
            cout<<"YES"<<endl;
        else if(s=="01")
            cout<<"YES"<<endl;
            else
            cout<<"NO"<<endl;
}
 
}
 
 
        
 
        
 
 
   
 
 
   
 