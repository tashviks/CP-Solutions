#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t ;
    cin>>t;
    while(t--)
    {
        int x , y , k;
        cin>>x>>y>>k;
        if(x/(-1)==x && y/(-1)==(-y))
        cout<<"NO"<<endl;
        else if(y/(-1)==y && x/(-1)==(-x))
        cout<<"NO"<<endl;
        else
        {
            if(x%k==0 && y%k==0)
            cout<<"YES"<<"\n";
            else
            cout<<"NO"<<"\n";
        }
    }
}