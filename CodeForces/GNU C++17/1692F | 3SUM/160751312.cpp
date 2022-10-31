#include<bits/stdc++.h>
using  namespace  std;
 
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
 
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
 
#define faster  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 
#define sq(x)   (x)*(x)
#define PI      acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl      '\n'
 #define mod 1000000007
typedef long long int ll;
typedef unsigned long long int  llu;
 
// PRIME NUMBER TEST//
bool prime(int n)
{
    if(n<2)return false;
    if(n<=3)return true;
    if(n%2==0)return false;
    for(int i=3;i*i<=n;i+=2)
    {
        if(n%i==0)return false;
    }
    return true;
}
 
// Graph Grid //
int dx[]={-1,0,1,0};
int dy[]={0,1,0,-1};
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        map<int,int>mp;
        int ans=0;
        int ar[n+3];
        for(int i=0;i<n;i++)
        {
            cin>>ar[i];
            int x = ar[i]%10;
            mp[x]++;
        }
        for(int i=0;i<10;i++)
        {
            for(int j=0;j<10;j++)
            {
                for(int k=0;k<10;k++)
                {
                    int a=-1,b=-1,c=-1;
                    if(mp[i]!=0)
                    {
                        a=1;
                        mp[i]--;
                    }
                    if(mp[j]!=0)
                    {
                        b=1;
                        mp[j]--;
                    }
                    if(mp[k]!=0)
                    {
                        c=1;
                        mp[k]--;
                    }
 
                    if(a==1&&b==1&&c==1)
                    {
                        int sum=i+j+k;
                        if(sum%10==3)
                        {
                            ans=1;
                            break;
                        }
                    }
                    if(a==1)mp[i]++;
                    if(b==1)mp[j]++;
                    if(c==1)mp[k]++;
                }
            }
        }
        if(ans==1)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
 
    }
}
 