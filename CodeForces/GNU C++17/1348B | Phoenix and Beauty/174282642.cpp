#include <bits/stdc++.h>
using namespace std;
 
void solve(){
  int N,K;
  cin>>N>>K;
  set<int>s;
  for (int i=0;i<N;i++){
    int a;
    cin>>a;
    s.insert(a);
  }
  if (s.size()>K)
{
    cout<<-1<<endl;
    return;
  }
  cout<<N*K<<endl;
  for (int i=0;i<N;i++){
        for (int b:s)
      cout<<b<<' ';
    for (int j=0;j<K-(int)s.size();j++)
      cout<<1<<' ';
  }
  cout<<endl;
}
 
int main(){
  int t; cin>>t;
  while (t--)
    solve();
}