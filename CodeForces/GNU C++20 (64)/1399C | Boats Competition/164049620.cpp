#include<bits/stdc++.h>
using namespace std ;
#define FAST         ios_base::sync_with_stdio(false);   cin.tie(NULL);
#define all(v) v.begin(),v.end()
#define nl         "\n"
typedef long long int  li;
#define BUFFER         cin.ignore(numeric_limits<streamsize>::max(),'\n');
#define SORT        sort(a,a+n);
#define mod         1000000007
#define pb          push_back
#define test        ll t;cin>>t;while(t--)
#define FOR(i,x,n)   for(li i=x;i<n;i++)
#define fi first
#define se second
#define lb lower_bound
#define clear(a,z) memset(a,z,sizeof(a))
#define vp vector<pair<li,li> >
#define pr pair<li,li>
#define vi vector<li>
typedef long long ll;
  
 
struct Point{
    li x,y;
}; 
 
struct Tree{
    li sv,ps,ss,ms;
}; 
 
 
bool compre(pr t1,pr t2){
     if(t1.fi == t2.fi) return t1.se<t2.se;    
     return t1.fi<t2.fi;
}  
li orientation(Point p,Point q,Point r){
    li v=(q.y-p.y)*(r.x-q.x)-(r.y-q.y)*(q.x-p.x);
   if(v==0) return 0;
    return (v>0)?1:2;
}
 
bool onsegt(Point p,Point f,Point q){
     
     if(f.x>=min(p.x,q.x) && f.y<=max(p.x,q.x) && f.y>=min(p.y,q.y) && f.y<=max(q.y,p.y)) return true;
     return false;
}
bool doInteset(Point p1,Point q1,Point p2,Point q2){
     
      li a=orientation(p1,q1,p2);
      li a1=orientation(p1,q1,q2);
      li a2=orientation(p2,q2,p1);
      li a3=orientation(p2,q2,q1);
      if(a!=a1 && a2!=a3)
        return true;
      if(!a && onsegt(p1,p2,q1))   return true;
      if(!a1 && onsegt(p1,q2,q1))  return true;
      if(!a2 && onsegt(p2,p1,q2))  return true;
      if(!a3 && onsegt(p2,p1,q2))  return true;
      return false;
}
void builtTree(li arr[],li st[],li start,li en,li tn){
     if(start==en){
         st[tn]=arr[en];
         return;
     }
     li md=(start+en)/2;
     builtTree(arr,st,start,md,2*tn);
     builtTree(arr,st,md+1,en,2*tn+1);
     st[tn]=min(st[2*tn],st[2*tn+1]);
}
 
void update(li arr[],li st[],li start,li end,li tn,li indx,li v){
    li md=(start+end)/2;
    if(start==end){
        arr[indx]=v;
        st[tn]=arr[indx]; return;
    }
    if(indx<=md) update(arr,st,start,md,2*tn,indx,v);
    else update(arr,st,md+1,end,2*tn+1,indx,v);
    st[tn]=st[2*tn]+st[2*tn+1];
}
 
li queryt(li st[],li start,li end,li tn,li l,li r){
    if(start>=l && r>=end) return st[tn];
    else if(start>r || end < l) return 0;
    li md=(start+end)/2;
    return queryt(st,start,md,2*tn,l,r)+queryt(st,md+1,end,2*tn+1,l,r);
}
 
void updatezy(li *tree,li *lazy,li start,li en,li tn,li l,li r,li v){
     if(start>en) return;
     if(lazy[tn]!=0){
         tree[tn]+=lazy[tn];
         if(start!=en){
             lazy[2*tn]+=lazy[tn];
             lazy[2*tn+1]+=lazy[tn];
         }
         lazy[tn]=0;
       
     }
     if(start>r || l>en) return;
     if(l<=start && r>=en){
         tree[tn]+=v;
         if(start!=en){
             lazy[2*tn]+=v;
             lazy[2*tn+1]+=v;
         }
         return;
     }
     li md=(start+en)/2;
     updatezy(tree,lazy,start,md,2*tn,l,r,v);
     updatezy(tree,lazy,md+1,en,2*tn+1,l,r,v);
     tree[tn]=min(tree[2*tn],tree[2*tn+1]);
}  
void segmentTree(){
     li n,q;
     cin>>n>>q;
     li arr[n];
     FOR(i,0,n) cin>>arr[i];
     li st[4*n];
     li lazy[4*n];
     clear(st,0);
     clear(lazy,0);
     builtTree(arr,st,0,n-1,1);
     while(q--){
         li x,y,qt,p; 
         cin>>qt>>x>>y>>p;
         if(qt==1)  updatezy(st,lazy,0,n-1,1,x-1,y-1,p);
         else cout<<queryt(st,0,n-1,1,x-1,y-1)<<endl;
     }
     FOR(i,0,4*n) cout<<st[i]<<" ";
     cout<<endl;
      FOR(i,0,4*n) cout<<lazy[i]<<" ";
     cout<<endl;
  } 
void builtMaxSumTree(li arr[],Tree st[],li start,li en,li tn){
     if(start==en){
         st[tn].sv=arr[en];
         st[tn].ss=arr[en];
         st[tn].ps=arr[en];
         st[tn].ms=arr[en];
         return;
     }
     li md=(start+en)/2;
     builtMaxSumTree(arr,st,start,md,2*tn);
     builtMaxSumTree(arr,st,md+1,en,2*tn+1);
     
     st[tn].sv=st[2*tn].sv+st[2*tn+1].sv;
     st[tn].ps=max(st[2*tn].ps,st[2*tn].sv+st[2*tn+1].ps);
     st[tn].ss=max(st[2*tn+1].ss,st[2*tn].ss+st[2*tn+1].ss);
     st[tn].ms=max(st[tn].ps,max(st[tn].ss,max(st[2*tn].ms,max(st[2*tn+1].ms,st[2*tn].ss+st[2*tn+1].ps))));
     
} 
 
Tree querytt(Tree st[],li start,li end,li tn,li l,li r){
    Tree av={INT_MIN,INT_MIN,INT_MIN,INT_MIN};
    if(start>r || l>end) return av;
    else  if(start>=l && r>=end) return st[tn];
    li md=(start+end)/2;
    if(l>md) return querytt(st,md+1,end,2*tn+1,l,r);
    if(r<=md) return querytt(st,start,md,2*tn,l,r);
    Tree lt=querytt(st,start,md,2*tn,l,r);
    Tree rt=querytt(st,md+1,end,2*tn+1,l,r);
    
    av.sv=lt.sv+rt.sv;
    av.ps=max(lt.ps,lt.sv+rt.ps);
    av.ss=max(rt.ss,lt.sv+rt.ss);
    av.ms=max(av.ps,max(av.ss,max(lt.ms,max(rt.ms,lt.ss+rt.ps))));
    return av;
}
 void maxSumsbrr(){
     
     li n,q;
     cin>>n;
     li arr[n];
     FOR(i,0,n) cin>>arr[i];
     Tree st[4*n];
     clear(st,0);
     
     builtMaxSumTree(arr,st,0,n-1,1);
     
     cin>>q;
     while(q--){
         li x,y;
         cin>>x>>y;
         cout<<querytt(st,0,n-1,1,x-1,y-1).ms;
         cout<<endl;
     }
     
 }
void dijkshtra_algorithm(){
     li n,e; li start;
     cin>>n>>e; 
     cin>>start;
     vp edge[n];
     bool visited[n];
     li distance[n];
     FOR(i,0,e){
        li sv,ev,wt;
        cin>>sv>>ev>>wt;
        edge[sv].pb({ev,wt});
        edge[ev].pb({sv,wt});
     }
     FOR(i,0,n) distance[i]=INT_MAX;
     distance[start]=0;
     clear(visited,0);
     priority_queue<pr,vp,greater<pr> > q;
     q.push({0,start});
     while(!q.empty()){
        li a=q.top().se; q.pop();
        if(visited[a]) continue;
        visited[a]=true;
        for(auto b:edge[a]){
              if((distance[a]+b.se)<distance[b.fi]){
                 distance[b.fi]=distance[a]+b.se;
                 q.push({distance[b.fi],b.fi});
              }
        }
     }
     FOR(i,0,n) cout<<distance[i]<<" ";
     cout<<endl;
}
void dfsfunction(vi edge[],li start,li prnt,li pn[],li mn[]){
     mn[start]=pn[start];
     for(auto a:edge[start]){
         if( a==prnt ) continue;
         dfsfunction(edge,a,start,pn,mn);
         mn[start]+=mn[a];
     }
}
 
void contyhppns(){
     li n,m;
     cin>>n>>m;
     li pn[n];
     li hs[n];
     vi edge[n];
     li mn[n];
     vp pv(n);
     clear(mn,0);
     FOR(i,0,n) cin>>pn[i];
     FOR(i,0,n) cin>>hs[i];
     bool visited[n];
     clear(visited,0);
     FOR(i,0,n-1){
        li x,y;
        cin>>x>>y;
        x--; y--;
        edge[x].pb(y);
        edge[y].pb(x);
     }
     dfsfunction(edge,0,-1,pn,mn);
     bool flag=true;
     if(mn[0]>=abs(hs[0]) && (mn[0]+hs[0])%2==0 && (mn[0]-hs[0])%2==0 ){
        li h=(mn[0]+hs[0])/2;
        li h2=(mn[0]-hs[0])/2;
        if(h2>=pn[0]) h2-=pn[0];
        else{
            h-=(pn[0]-h2);
            h2=0;
        }
        pv[0]={h,h2};
     }
     else flag=false;
     if(!flag){
        cout<<"NO"<<endl;
        return; 
     }
     queue<li> q;
     q.push(0);
     while(!q.empty()) {
 
         li a=q.front(); q.pop();
         visited[a]=true;
         for(auto b:edge[a]){
             if(visited[b]) continue;
             // cout<<pv[b].fi<<" "<<pv[a].se<<endl;
              if(mn[b]>=abs(hs[b]) && (mn[b]+hs[b])%2==0 && (mn[b]-hs[b])%2==0){
                  li h=(mn[b]+hs[b])/2;
                  li h2=(mn[b]-hs[b])/2;
                  if(h2>pv[a].se){
                            pv[a].fi-=(h2-pv[a].se);
                            pv[a].se=0;
                  }
                  else pv[a].se-=h2;
                  pv[a].fi-=h;
                  if(h2>=pn[b]) h2-=pn[b];
                  else{
                        h-=(pn[b]-h2);
                         h2=0;
                     } 
                  pv[b]={h,h2};
                  if(pv[a].fi<0 || pv[a].se<0 || pv[b].fi<0 || pv[b].se<0 ) flag=false;
                }
                else flag=false;
                if(!flag){
                    cout<<"NO"<<endl;
                    return;
                }
                q.push(b);
         }
 
     }
  cout<<"YES"<<endl;   
}
 
void floydWarshall(){
      li n,e;
      cin>>n>>e;
      li edges[n][n];
      FOR(i,0,n){
        FOR(j,0,n) edges[i][j]=INT_MAX;
      }
      FOR(i,0,n) edges[i][i]=0;
      FOR(i,0,e) {
        li sv,ev; li wt;
        cin>>sv>>ev; 
        cin>>wt;
        edges[sv][ev]=wt;
        edges[ev][sv]=wt;
      }
      FOR(k,0,n){
        FOR(i,0,n)
         FOR(j,0,n) edges[i][j]=min(edges[i][j],edges[i][k]+edges[k][j]);
      }
      FOR(i,0,n){
         FOR(j,0,n) cout<<edges[i][j]<<" ";
         cout<<endl;
      }
}
 
 
 
 
li findPath(vi edge[],li start,li parent){
   
   priority_queue<li> q;
   for(auto a:edge[start]){
        if(a==parent) continue;
        q.push(findPath(edge,a,start)+1);
 
   }
   li av=0;
   li av2=0;
   if(!q.empty()){
     av2=q.top();
     av+=q.top();q.pop();
   }
    if(!q.empty()){
        av2=max(av2,q.top());
       av+=q.top();q.pop();
   }
   if(!start) return av;
   return av2;
}
 
 
void findDiameter(){
      li n,m;
     cin>>n>>m;
     vi edge[n];
     FOR(i,0,m){
        li x,y;
        cin>>x>>y;
        x--; y--;
        edge[x].pb(y);
        edge[y].pb(x);
     }
    cout<<findPath(edge,0,-1);
}
 
 
void remvsmmlst(){
     li n;
     cin>>n;
     li arr[n];
     FOR(i,0,n) cin>>arr[i];
     sort(arr,arr+n);
     FOR(i,0,n-1){
         if(arr[i+1]-arr[i]>1){
            cout<<"NO"<<endl;
            return;
         }
     }
     cout<<"YES"<<endl;
}
 
 
 
void gtfixng(){
     li n;
     cin>>n;
     li arr[n];
     li arr2[n];
     li a=INT_MAX;
     li b=INT_MAX;
     FOR(i,0,n){
        cin>>arr[i];
        a=min(a,arr[i]);
     }
     FOR(i,0,n){
        cin>>arr2[i];
        b=min(b,arr2[i]);
     }
     FOR(i,0,n){
        arr[i]-=a;
        arr2[i]-=b;
     }
     li av=0;
     FOR(i,0,n){
        av+=max(arr[i],arr2[i]);
     }
     cout<<av<<endl;
}
 
li printPair(li arr[], li n, li sum) 
{ 
    li count = 0; // Initialize result 
  
    // Consider all possible pairs and check 
    // their sums 
    bool *visited=new bool[n]();
    for (li i = 0; i < n; i++){ 
         if(visited[i]) continue;
        for (li j = i + 1; j < n; j++){ 
               if(visited[j]) continue;
            if (arr[i] + arr[j] == sum){
                   count++;
                   visited[j]=true;
                   break;
                } 
         }     
   }       
 
     return count;           
} 
void printPairs() 
{ 
     li n;
     cin>>n;
     li arr[n];
     FOR(i,0,n) cin>>arr[i];
     li av=0;
    // Nested loop for all possible pairs 
    for (int i = 0; i <=100; i++) { 
              av=max(av,printPair(arr,n,i));
        } 
    
    cout<<av<<endl;
}
 
 
 
 
void strngsusqnce(){
 
     string s;
     li n;
     cin>>n>>s;
     li arr[n];
     li pv=-1;
     arr[0]=1;
     li count=1;
     FOR(i,1,n){
        if(s[i]!=s[i-1]) arr[i]=arr[i-1];
        else{
           if(pv==-1 || s[pv]==s[i]){
                count++;
                arr[i]=count;
                pv=i-1;
           }
           else{
             arr[i]=arr[pv];
             // pv=i-1;
           }
        }
     }
     cout<<count<<endl;
     FOR(i,0,n) cout<<arr[i]<<" ";
     cout<<endl;
}
 
 
 
int main(){
 
    #ifndef ONLINE_JUDGE
      freopen("input.txt","r",stdin);
      freopen("output.txt","w",stdout);
    #endif 
 
    FAST
    test{
 
 
     // floydWarshall();
    //      // arrywk();
    //     // minCost();
        // findDiameter();
        // remvsmmlst();
    //    // dijkshtra_algorithm();
    //     // findsr();
    //    // contflnt();
        // gtfixng();
    //     fdptrn();
    //     // contyhppns();
        printPairs();
        // strngsusqnce();
    //    // ftrectnt();
    } 
    return 0;
}