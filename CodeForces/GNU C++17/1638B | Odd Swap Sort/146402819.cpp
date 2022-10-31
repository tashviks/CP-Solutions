#include<bits/stdc++.h>
#define len(s) (int)s.size()
#define ll long long
#define TEST int t; cin>>t; while(t--)
#define SPEED ios_base::sync_with_stdio(false); cin.tie(0);
using namespace std;
 
 
signed main() {
    SPEED
    int game;
    TEST
    {
        int i,j,n;
        game++;
        cin>>n;
        game--;
        vector<int> v1,v2;
        for(i=0;i<n;i++)
        {
            int x;
            cin>>x;
            if(x%2) 
              v1.push_back(x);
            else 
              v2.push_back(x);
        }
        game++; game++;
        int f= is_sorted(v2.begin(),v2.end());
        game--; game--;
        int g= is_sorted(v1.begin(),v1.end());
        if(f and g) 
          cout<<"Yes"<<endl;
 
        else cout<<"No"<<endl;
 
        game++;
    }
}
 