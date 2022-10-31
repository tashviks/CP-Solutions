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
        char ch[3];
        for(int i =0;i<3;i++)
        cin>>ch[i];
        pair<char , int>x ={'\0' , 0};
        pair<char , int>y = {'\0' , 0};
        cin>>x.first>>y.first;
        
        for(int i =0;i<3;i++)
        {
            if(ch[i] == x.first)
            {
            x.second = i;
            continue;
            }
            if(ch[i] == y.first)
            {
                y.second = i;
            }
            
        }
        
        if(x.second>y.second)
        cout<<y.first<<endl;
        else
        cout<<x.first<<endl;
        
        
    }
}