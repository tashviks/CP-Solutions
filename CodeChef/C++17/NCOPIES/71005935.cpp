#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,m,c,a,t;
char s[200002];
int level = 0;
void solve()
 {
    level++;
  c=0;a=0;t=0;
  level++;level++;level++;
  cin >> n >> m >> (s+1);
  level++;level++;level++;
  for(int i=1;i<=n;++i)
    if(s[i]=='1') c++;
  if(c==0) {
    cout << n*m << endl;
    return;
  }

  level++;level++;level++;level++;
  if(c*m%2==1) {
    cout << 0 << endl;
    return;
  }
  level++;level++;
  if(m%2==0) {
    for(int i=1;i<=n;++i) {
      if(s[i]=='1') break;
      a++;
    }
    level++;level++;
    for(int i=n;i>=1;--i) {
      if(s[i]=='1') break;
      a++;
    }
    level++;level++;
    cout << a+1 << endl;
    return;
  }
  level++;level++;
  for(int i=1;i<=n;++i) {
    if(s[i]=='1') t++;
    if(t==c/2) a++;
  }
  long long ans = 0;
  ans = a;
  cout << ans << endl;
}
signed main() {
  int T;
  cin >> T;
  while(T--) solve();
}