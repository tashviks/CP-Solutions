#include<bits/stdc++.h>
using namespace std;
#define fo(i,n) for(int i=0;i<n;i++)
typedef long long ll;
#define endl "\n"
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define pb push_back
#define mp make_pair
#define Fi first
#define Se second
#define all(x) x.begin(), x.end()
#define sortall(x) sort(all(x))
#define itr(it, a) for(auto it = a.begin(); it != a.end(); it++)

int getxor(int n){
  int mod=n%4;
  if(mod==0)
    return n;
  else if(mod==1)
    return 1;
  else if(mod==2)
    return n+1;
  else if(mod==3)
    return 0;
}

void solve() {
  int n,x;
  cin>>n>>x;
  if(x==5*pow(10,5)){
    int temp=getxor(n-2);
    for(int i=1;i<n-1;i++)
      cout<<i<<" ";
    int ans=pow(2,17);
    fo(i,17){
      int temp1=temp>>i;
      if(temp1&1) ans+=pow(2,i);
    }
    cout<<ans<<" "<<500000-pow(2,17)<<endl; return;
  }
  if(x>100000){
    if(n%4==0){
      for(int i=1;i<n;i++)
        cout<<i<<" ";
      cout<<x<<endl;
    }
    else if(n%4==1){
      fo(i,n-1) cout<<i<<" ";
      cout<<x<<endl;
    }
    else if(n%4==2){
      for(int i=1;i<n;i++)
        cout<<i<<" ";
      if(x%2==0) cout<<x+1<<endl;
      else cout<<x-1<<endl;
    }
    else{
      fo(i,n-1) cout<<i<<" ";
      if(x%2==0) cout<<x+1<<endl;
      else cout<<x-1<<endl;
    }
  }
  else {
    if(n%4==0){
      if(x==1){
        for(int i=3;i<=n-1;i++)
          cout<<i<<" ";
        cout<< "262143 131072 131069\n";
        return;
      }
      int temp2=pow(10,5)+3+1;
      fo(i,n-2){
        cout<<temp2<<" ";
        temp2++;
      }
      cout<<"0 ";
      if(x%2==0) cout<<x+1<<endl;
      else cout<<x-1<<endl;
    }
    else if(n%4==1){
      int temp2=pow(10,5)+3+1;
      fo(i,n-1){
        cout<<temp2<<" ";
        temp2++;
      }
      cout<<x<<endl;
    }
    else if(n%4==2){
      int temp2=pow(10,5)+3+1;
      fo(i,n-2){
        cout<<temp2<<" ";
        temp2++;
      }
      cout<<x<<" 0"<<endl;
    }
    else{
      int temp2=pow(10,5)+3+1;
      fo(i,n-1){
        cout<<temp2<<" ";
        temp2++;
      }
      if(x%2==0) cout<<x+1<<endl;
      else cout<<x-1<<endl;
    }
  }
}

int main() {
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int test = 1;
  cin >> test;
    //int i=1;
  while(test--) {
      //cout<<"test case "<<i++<<" :"<<endl;
    solve();
  }

  return 0;
}
