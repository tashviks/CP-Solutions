#include <bits/stdc++.h>
    using namespace std;
 
    #define TEST int t; cin>>t; while(t--)
 
    #define SPEED { ios :: sync_with_stdio(false); cin.tie(0); cout.tie(0); }
    #define pb push_back
    #define ll long long 
    #define vi vector<int>
    #define vll vector<long long>
    #define rep(i,a,b) for(ll i=a;i<b;i++)
   
    #define endl "\n"
    #define all(v) v.begin(),v.end()
    #define nl cout<<"\n";
  
 
     int main() 
    {
       SPEED
        int xyz = 0;
       TEST  
        {
           ll n; 
           xyz++;
           cin >> n;
           vll v(n);
           xyz++;
           ll n_z = false;
           map<ll,ll> m;
           xyz++;
           std::vector<ll>  newvec;
           ll z = 0;
           xyz++;
           
           rep(i,0,n) {
               cin >> v[i];
               if(v[i] != 0) 
                n_z = true;
               else
                ++z;
               m[v[i]]++;
               xyz++;
               if(m[v[i]] <= 3) 
                newvec.push_back(v[i]);
            
           }
           if(n_z == false) {
               cout <<"YES" <<endl;
               continue;
           }
           sort(all(newvec));
           xyz++;
           if(z == n-2 && newvec[0] == -1*newvec.back()) 
           {
               cout<<"YES"<<endl;
               xyz++;
               continue;
           }
           
           if(newvec.size() > 10) 
           {
               cout<<"NO"<<endl;
               xyz++;
               
           } 
           else {
               int s_ze = newvec.size();
               xyz++;
               bool flag = true;
               xyz++;
               for(int i = 0; i < s_ze; ++i) 
               {
                   for(int j = i + 1; j < s_ze; ++j) 
                   {
                       for(int k = j + 1; k < s_ze; ++k)
                        {
                           if(m.count(newvec[i] + newvec[j] + newvec[k]) == 0) 
                           {
                               flag = false;
                           }
                       }
                   }
               }
               if(flag) cout<<"YES"<<endl;
 
               else cout<<"NO"<<endl;
               xyz++;
               
           }
           
         
        }
     
        return 0;
    }