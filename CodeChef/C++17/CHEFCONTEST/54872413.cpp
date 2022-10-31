    #include <bits/stdc++.h>
    
    
    
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
    using namespace std;
    int main()
    {
        GODSPEED;
        int t ;
        cin>>t;
        while(t--)
        {
            int x , y , p , q;
            cin>>x>>y>>p>>q;
            int chef = x + p*10;
            int chefina = y + q*10;
            if(chef < chefina)
            cout<<"Chef"<<endl;
            else if(chef > chefina)
            cout<<"Chefina"<<endl;
            else
            cout<<"Draw"<<endl;
            
            
        }
    }