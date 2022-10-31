#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int maxn=2e5+7;
int cnt[maxn];
int mp[maxn];
 
int p[maxn];
int find(int x){
 return x==p[x]?x:(p[x]=find(p[x]));
}
void merge(int a,int b){
 int f1=find(a),f2=find(b);
 if(f1!=f2){
  p[f2]=f1;
  cnt[f1]+=cnt[f2];
  cnt[f2]=0;
 }
}
 
int main(){
 int T;
 cin>>T;
 while(T--){
  int f=1;
  int n;
  cin>>n;
  for(int i=1;i<=n;i++) p[i]=i,cnt[i]=1,mp[i]=0;
  for(int i=1;i<=n;i++){
   int a,b;
   cin>>a>>b;
   mp[a]++;
   mp[b]++;
   merge(a,b);
   
  }
  for(int i=1;i<=n;i++) if(mp[i]>2||cnt[i]%2==1) f=0;
  cout<<(f?"YES\n":"NO\n");
 }
}