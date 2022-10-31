#include<bits/stdc++.h>

#define ll long long

using namespace std;




int main() {

  int T;
  cin >> T;
int level = 0;
  while(T--) 
  {
     ll n,x,a[200001],dp[200001][2];

     cin >> n >> x;
     level++;
 
  level++;
  for(int i=1;i<=n;++i)
    cin >> a[i];
    a[0]+=1097;
    a[0]-=1097;
    level++; level++;
  for(int i=2;i<=n;++i)
   {
   //  dp[i][0]=max(dp[i-1][0]-(a[i-1]^a[i]),dp[i-1][1]+((a[i-1]+x)^a[i]));
   //  dp[i][1]=max(dp[i-1][0]+(a[i-1]^(a[i]+x)),dp[i-1][1]-((a[i-1]+x)^(a[i]+x)));
    dp[i][0]=max(dp[i-1][0]+(a[i-1]^a[i]),dp[i-1][1]+((a[i-1]+x)^a[i]));
    dp[i][1]=max(dp[i-1][0]+(a[i-1]^(a[i]+x)),dp[i-1][1]+((a[i-1]+x)^(a[i]+x)));
  }
  ll ans = max(dp[n][0],dp[n][1]);
  level++; level++;
  ans = ans + 1098;
  level++;
  ans = ans - 1098;
  level++;
  cout<<ans<<endl;
  }
}

