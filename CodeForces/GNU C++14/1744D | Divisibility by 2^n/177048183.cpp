#include<bits/stdc++.h>
#define c(x) __builtin_ctz(x)
int T,n,p,s,i,a[200050];
using namespace std;
signed main(){
    cin>>T;
    while(T--){
        cin>>n;
        iota(a,a+n,1);
        sort(a,a+n,[](int x,int y){return c(x)>c(y);});
        for(i=0;i<n;i++) cin>>s,p+=c(s);
        for(s=0;s<n&&p<n;s++) p+=c(a[s]);
        cout<<(p<n?-1:s)<<'\n';
        p=0;
    }
}