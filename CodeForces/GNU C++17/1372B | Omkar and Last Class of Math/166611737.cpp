#include<bits/stdc++.h>
using namespace std;
#define int long long
#define printv(v) for(int i=0;i<v.size();i++)cout<<v[i]<<" ";cout<<"\n";
#define printv2(v) for(int i=1;i<v.size();i++)cout<<v[i]<<" ";cout<<"\n";
#define prints(s) set<int>::iterator it;for(it=s.begin();it!=s.end();it++)cout<<*it<<" ";cout<<"\n";
#define inv(v,n) vector<int>v(n);for(int i=0;i<n;i++)cin>>v[i];
#define inv2(v,n) vector<int>v(n+1);for(int i=1;i<=n;i++)cin>>v[i];  
#define ins(s,n) set<int>s;for(int i=0;i<n;i++){int c;cin>>c;s.insert(c);}
#define sort1(v) sort(v.begin(),v.end());
#define reverse1(v) reverse(v.begin(),v.end());
#define sort2(v) sort(v.begin()+1,v.end());
#define reverse2(v) reverse(v.begin()+1,v.end());
#define loop(i,a,b) for(int i=a;i<=b;i++)
int sum(vector<int>v,int a,int b){int ans=0;for(int i=a;i<=b;i++)ans=ans+v[i];return ans;}
int sum(int arr[],int a,int b){int ans=0;for(int i=a;i<=b;i++)ans=ans+arr[i];return ans;}
void count(vector<int>v,int a,int b,vector<int>&x,map<int,int>&m){for(int i=a;i<=b;i++){if(m[v[i]]==0){x.push_back(v[i]);}m[v[i]]++;}}
main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);//ncr(n,r,p)//InverseofNumber(p);InverseofFactorial(p);factorial(p);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(n%2==0)
        cout<<n/2<<" "<<n-(n/2)<<"\n";
        else
        {
            int g=1;
            int lm=n-1;
            for(int i=1;i<=sqrt(n);i++)
            {
                if(n%i==0)
                {
                
                if(lm>(i*(n-i))/__gcd(i,n-i))
                {
                    lm=(i*(n-i))/__gcd(i,n-i);
                    g=i;
                }
            //  cout<<i<<" "<<lm<<" ";
                if(i==1)
                continue;
                if(lm>((n/i)*(n-(n/i)))/__gcd((n/i),n-(n/i)))
                {
                    lm=((n/i)*(n-(n/i)))/__gcd((n/i),n-(n/i));
                    g=n/i;
                }
            //  cout<<n/i<<" "<<lm<<"\n";
                }
            }
            cout<<g<<" "<<n-g<<"\n";
            
        }
    }
}