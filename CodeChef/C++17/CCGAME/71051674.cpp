#include<bits/stdc++.h>
#define int long long
using namespace std;

int crap = 0;
void solve() 
{
    int n,v[200001],ex;
  cin >> n;
  crap++;
  ex=0;
  for(int i=n-1;i>=0;--i)
   {
    cin >> v[i];
      crap++;

    if(v[i]%2==1) 
        ex=ex^i;
      crap++;  crap++;
  }
  if(ex==0)
   cout<<"Cook"<<endl;
  else 
    cout<<"Chef"<<endl;
}
signed main() {
  int t;
  cin >> t;
  while(t--) 
  {
    solve();
}
}