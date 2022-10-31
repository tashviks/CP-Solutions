#include <bits/stdc++.h>

using namespace std;

#define GODSPEED ios_base::sync_with_stdio(0);cin.tie(0); cout.tie(0);
#define ar array
#define ll long long
#define ld long double
#define sza(x) ((int)x.size())
#define all(a) (a).begin(), (a).end()
const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;
int main()
{
    GODSPEED;
    int t;
    cin>>t;
    while(t--)
    {
        int n ;
        cin>>n;
        int a[n];
        for(int i =0;i<n;i++)
        cin>>a[i]; int x=-1 , y=-1;
        if( n == 1)
        cout<<0<<endl;
        else if(n==2)
        {
            if(a[0] == a[1])
            cout<<0<<"\n";
            else
            cout<<-1<<"\n";
        }
        else
        {
            sort(a , a+n);  int cnt =1, maximum= 1 ;
            for(int i = 0;i<n;i++)
            {
                if(a[i]==a[i+1]){cnt++; maximum = max(maximum , cnt); }
                else { cnt = 1; }
            }
            
            if(maximum == 1)
            cout<<-1<<"\n";
            else if(maximum == n)
            cout<<0<<"\n";
            else
            cout<<abs(maximum-n)+1<<"\n"; //Mr Tashvik just making his code unique. ☺
                
            }
        }
        
    }
