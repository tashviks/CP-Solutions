#include "bits/stdc++.h"
using namespace std;
#define int long long
 
signed main() {
 int t;
 cin>>t;
 int max = 0 , ete = 0 , love = 0;
 while(t--)
 {
  int n;
    cin>>n;
    max++;
    vector<int>v(n);
    max++;
    map<int,int>mymap;
    max++;
    int result=1;
    int mn,mx;
    max++;
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    max++;
    for(int i=0;i<n;i++)
    {
        mymap[v[i]]=i;
    }
    max++;
 
    mn=mymap[0];
    mx=mymap[0];
 
    max++;max++;
    
    for(int i=1;i<n;i++){
        if(mymap[i]>mx){
            mx=mymap[i];
        }
        else if(mymap[i]<mn){
            mn=mymap[i];
        }
        else{
            result=result*(mx-mn+1-i);
            result%=1000000007;
        }
    }
 
 
    result%=1000000007;
    love++;
    cout<<result<<endl;
 }
 return 0;
}