#include <bits/stdc++.h>
using namespace std;
// The code is written by Tashvik Srivastava  // 
#define GODSPEED ios_base::sync_with_stdio(0);cin.tie(0); cout.tie(0);
#define TEST int t; cin>>t; while(t--)
#define loop1 for(int i =0;i<(sizeof(arr)/sizeof(arr[0]));i++)
#define ll long long
#define ld long double
#define sza(x) ((int)x.size())
#define all(a) (a).begin(), (a).end()
#define pb push_back
#define popb pop_back
#define rep(i, a, b) for (ll i = a; i < b; i++)
const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;
 
int main()
{
    GODSPEED
 
    TEST
    {
        ll n;
        cin >> n;
 
        vector<vector<ll>> v;
 
        rep(i, 0, n)
        {
            ll l, r, c;
            cin >> l >> r >> c;
 
            v.push_back({l, r, c});
        }
 
        vector<pair<ll, ll>> ans(n);
        ll size = 0;
        ll costt = INT_MAX;
 
        for (ll i = 0; i < n; i++)
        {
            if (v[i][1] - v[i][0] + 1 > size)
            {
                size = v[i][1] - v[i][0] + 1;
                costt = v[i][2];
            }
            else if (v[i][1] - v[i][0] + 1 == size)
            {
                if (costt > v[i][2])
                {
                    costt = v[i][2];
                }
            }
 
            ans[i] = {size, costt};
        }
 
        ll start = v[0][0];
        ll end = v[0][1];
 
        ll sidex = 0;
        ll eiddex = 0;
        
        vector<ll> temp;
        temp.push_back(0);
 
        for (ll i = 0; i < n; i++)
        {
            if (v[i][0] <= start)
            {
                if (v[i][0] == start)
                {
                    if (v[sidex][2] > v[i][2])
                    {
                        sidex = i;
                        start = v[i][0];
                    }
                }
                else
                {
                    sidex = i;
                    start = v[i][0];
                }
            }
 
            if (v[i][1] >= end)
            {
                if (v[i][1] == end)
                {
                    if (v[eiddex][2] > v[i][2])
                    {
                        eiddex = i;
                        end = v[i][1];
                    }
                }
                else
                {
                    eiddex = i;
                    end = v[i][1];
                }
 
 
            }
 
            if(sidex == eiddex)
            {
                if(v[eiddex][1] -v[eiddex][0] + 1 >ans[i].first )
                {
                    ans[i].second = v[eiddex][2];
                }
                else if(v[eiddex][1] -v[eiddex][0] + 1 ==ans[i].first)
                {
                    if(v[eiddex][2] < ans[i].second)
                    {
                        ans[i].second = v[eiddex][2];
                    }
                }
 
            }
            else
            {
                if(v[eiddex][1] - v[sidex][0]  + 1 >= ans[i].first)
                {
                    if(v[eiddex][1] - v[sidex][0]  + 1 == ans[i].first)
                    {
                        ans[i].second = min(ans[i].second , v[eiddex][2]  + v[sidex][2]);
 
                    }
                    else
                    {
                        ans[i].second = v[eiddex][2] + v[sidex][2];
                    }
 
 
                }
 
            }
        }
 
        for(ll i=0; i<n; i++)
        {
            cout<<ans[i].second<<endl;
        }
        
    }
 
    return 0;
}