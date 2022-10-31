#include <iostream>
#include <cstring>
#include <string>
#include <bitset>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <map>
#include <utility>
#include <cstdio>
#include <set>
#include <queue>
#include<functional>
 
#define si(a) scanf("%d",&a)
#define sl(a) scanf("%lld",&a)
#define sd(a) scanf("%lf",&a)
#define sc(a) scahf("%c",&a);
#define ss(a) scanf("%s",a)
#define pi(a) printf("%d\n",a)
#define pl(a) printf("%lld\n",a)
#define pc(a) putchar(a)
#define re register
#define cs const
#define rep(i,a,b) for(int i=a;i<b;i++)
#define Rep(i,a,b) for(int i=a;i<=b;i++)
#define ll long long
#define llu unsigned long long
#define IOS ios::sync_with_stdio(false)
#define mem(ar,num) memset(ar,num,sizeof(ar))
#define me(ar) memset(ar,0,sizeof(ar))
#define INF 0x3f3f3f3f
#define fi first
#define se second
 
using namespace std;
 
llu power(llu n, llu m, llu k){
    llu ans=1%k;
    while(m){
        if(m&1)
            ans=ans*n%k;
        n=n*n%k;
        m>>=1;
    }
    return ans%k;
}
 
/*ST表模板
int f[N+1][N+1];
void ST_prework(){f[i][j]表示区间[i,i+2^j-1]中的最大值
    Rep(i,1,n)
        f[i][0]=a[i];
    int t=log(n)/log(2)+1;
    rep(i,1,t)
        rep(j,1,n-(1<<i)+1)
            f[i][j]=max(f[j][i-1],f[j+(1<<(i-1))][i-1]);
}
int ST(int l, int r){//取[l,r]中的最大值
    int k=log(r-l+1)/log(2);
    return max(f[l][k],f[r-(1<<k)+1][k]);
}
*/
 
/*
//离散化--排序
int u[N],dis=0;
void discrete(int n){
    sort(u,u+n);
    dis=unique(u,u+n)-u;
}
//离散化--二分查找映射
int find(int x){
    return lower_bound(u,u+dis,x)-u;//x映射为0-dis-1中的一个数
}
*/
 
/*归并排序求逆序对
void merge_sort(int *a,int l,int r){
    if(r-l<1)return ;
    ll mid=(l+r)>>1;
    merge_sort(a, l, mid);
    merge_sort(a, mid+1, r);
    int i=l,j=mid+1;
    Rep(k,l,r){
        if(j>r||i<=mid&&a[i]<=a[j])
            p[k]=a[i++];
        else
            p[k]=a[j++],cnt+=mid-i+1;
    }
    Rep(k,l,r)
        a[k]=p[k];
}
*/
 
 
 
const int N=2e5+10;
const double eps=1e-6;
 
pair<int,int> a[N];
int d[N];
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        Rep(i,1,n)cin >> a[i].first,a[i].second=i;
        sort(a+1,a+n+1,greater<pair<int ,int>>());
        ll k=1;
        ll ans=0;
        d[0]=0;
        Rep(i,1,n){
            d[a[i].second]=k;
            ans+=2*abs(a[i].first*k);
            if(k>0)k=-k;
            else k=-k,k++;
            //cout << k << endl;
            
            //cout << ans << ' ' << a[i].first << ' ' << k << endl;
        }
        cout << ans << endl;
        Rep(i,0,n)cout << d[i] << ' ';
        cout << endl;
    }
    return 0;
}