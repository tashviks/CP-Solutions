#include <bits/stdc++.h> 
 
using namespace std;
 
// JAI BAJRANG BALI QUESTION DEKH K MERI FATI // 
//GOAL : ITNI CP AA JAAYE KI MAZA AA JAAYE//
 
#define LOTS ios_base::sync_with_stdio(0);cin.tie(0); cout.tie(0);
 
#define TEST_HAI_KAL int t; cin>>t; while(t--)
 
#define ll long long
 
#define ld long double
 
#define arrayloop for(int i =0;i<(sizeof(arr)/sizeof(arr[0]));i++)
 
#define szof(x) ((int)x.size())
 
#define pb push_back
 
#define khatam exit(0);
 
#define allof(a) (a).begin(), (a).end()
 
#define popb pop_back 
 
#define mp(a,b) make_pair(a,b)
 
#define aofp_ll pair<ll,ll>a[n];
 
#define vofp_ll vector<pair<ll , ll>> v;
 
#define ascend(a) sort(a , a+n);
 
#define loop(i ,a , b) for (ll i = a; i < b; i++)
 
const int MAX = 1e5 + 5;
 
const ll MODULO = 1e9 + 7;
 
const ll INFINITE = 1e9;
 
const ld EP = 1e-9;
 
int main()
{
    LOTS
    TEST_HAI_KAL                                                        
    {
        ll n , m , r , c;
        cin>>n>>m>>r>>c;
        char a[n][m];
        int count = 0;
        vofp_ll
        for(ll i = 0;i<n;i++)
        {
            for(ll j =0;j<m;j++)
            {
                cin>>a[i][j];
                if(a[i][j]=='B')
                {
                    count++;
                    v.push_back(make_pair(i,j));
                }
            }
        }
 
        if(count==0)
            cout<<-1<<endl;
 
       else if(a[r-1][c-1]=='B')
        cout<<"0"<<endl;
 
        else
        { 
            int flag = 0;
            for(int i =0;i<count;i++)
            {
                if(v[i].first==(r-1) or v[i].second==(c-1))
                {
                    cout<<"1"<<endl;
                    flag = 1;
                    break;
                }
            }
 
            if(flag == 0)
                cout<<"2"<<endl;
 
 
        }
        
 
        
 
 
        
    }
 
}
 
 
   