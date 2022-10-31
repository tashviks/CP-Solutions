
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pi (3.141592653589)
#define mod 1000000007
#define float double
#define puss push_back
#define mp make_pair
#define ff first
#define ss second
#define all(c) c.begin(), c.end()
#define min3(a, b, c) min(c, min(a, b))
#define min4(a, b, c, d) min(d, min(c, min(a, b)))
#define rrep(i, n) for(int i=n-1;i>=0;i--)
#define rep(i,n) for(int i=0;i<n;i++)
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)


void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int prev = 1-( s[0]-'0');
    int old2 = 1 - prev;
    int ans = 0;
    vector<string> vec1;
    vector<string> vec2;
    string st = "";
    string st1 = "";
    for(int i = 0; i < n ; i++){
        prev = 1- prev;
        old2 = 1- old2;
        if(s[i]-'0' != prev)
        {
            st+=s[i];
        }else if( st != "")
        {
            vec1.puss(st);
            st = "";
        }
        if(s[i]-'0' != old2)
        {
            st1+=s[i];
        }else if( st1 != "")
        {
            vec2.puss(st1);
            st1 = "";
        }
    }
    if(st != "")
    {
        vec1.puss(st);
    }
    if(st1 != ""){
        vec2.puss(st1);
    }
   
    int l = vec1.size();
    int l1 = vec2.size();
    int strt = min(l, l1);
    int ed = max(l, l1);

    
   if(l == 0 || l1 == 0)
   {
       cout<<"Uttu"<<endl;
   }
   else
   {
      int count = (2*strt) - 1;
      if(strt+1 == ed) count++;

      if(count%3 == 0){
          cout<<"Uttu"<<endl;
      }else
      {
          cout<<"JJ"<<endl;
      }
   }
    
    
}

int32_t main(){
fast;


int t;
cin>>t;
while(t--){
    solve();
}
return 0;
}
