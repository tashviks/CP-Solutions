#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t ;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(n%2 ==0)
        {
            cout<<0<<endl;
        }
        else
        {
            int count = 0; int copy = n;
            while(copy!=0)
            {
                count ++;
                copy = copy/10;
            }
            int f_dig = n/pow(10,count-1);
            
            if(f_dig%2==0)
            cout<<1<<endl;
            else
            {
            int flag = 0;
            while(n!=0)
            {
              int dig = n%10;
              if(dig%2==0)
              {
              flag++; break;
              }
              n=n/10;
            }
            if(flag == 0)
            cout<<-1<<endl;
            else 
            cout<<2<<endl;
            }
            
        }
    }
}