#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(n%7==0)
        {
            cout<<n<<endl;
        }
        else
        {
            int ll;
            ll = n - (n%10);
            int ul;
 
            if(n/10 != 0)
             ul = n +(10 - (n%10));
            else
                ul = n +10;
 
            
            for(int i = ll;i<=ul;i++)
            {
                if(i%7==0)
                {
                    cout<<i<<endl;
                    break;
                }
            }
        }
    }
}