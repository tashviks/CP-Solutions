#include <bits/stdc++.h>
using namespace std;
#define int long long 
#define mp make_pair
#define endl '\n'
 
const int N=2e5+5;
const int mod=1e9+7;
 
 
bool ispalindrome(string s)
{
    string t=s;
    reverse(s.begin(),s.end());
    for(int i=0;i<s.size();i++)
        if(s[i]!=t[i])
            return 0;
    return 1;
}
 
int hr;
int mi;
void convertinminute(string s)
{
    hr=0;
    mi=0;
    bool flag=0;
    for(auto it:s)
    {
        if(it==':')
        {
            flag=1;
            continue;
        }
        if(flag==0)
            hr=hr*10+it-'0';
        else 
            mi=mi*10+it-'0';
    }
}
 
 
 
int addtime(int m)
{
    int t=0;
    int ans=0;
    int flag=1;
    while(flag)
    {
        t+=m;
        mi+=m;
        hr+=mi/60;
        hr%=24;
        mi%=60;
        string s;
        if(hr<10)
            s+='0';
        s+=to_string(hr);
        if(mi<10)
            s+='0';
        s+=to_string(mi);
        ans+=ispalindrome(s);
        if(t%1440==0)
            flag=0;
    }
    return ans;
}
 
 
void solve(){
 
    string s;
    int m;
    cin>>s>>m;
    convertinminute(s);
    int ans=addtime(m);
    cout<<ans<<endl;
}
 
 
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    // freopen("input.txt", "r", stdin);
 // freopen("output.txt", "w", stdout);
    int T=1;
    cin>>T;
    while(T--){
        solve();
    }
}