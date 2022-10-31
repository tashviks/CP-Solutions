#include<bits/stdc++.h>
#define len(s) (int)s.size()
using namespace std;
using ll = long long;
string reverse(string str);
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
 
    int t;
    cin >> t;
    while(t--)
    {
      int n , k;;
      cin>>n>>k;
      string str;
      cin>>str;
      if(k==0)
        cout<<1<<endl;
 
      else if(str == reverse(str))
        cout<<1<<endl;
      else
        cout<<2<<endl;
  }
    return 0;
}
 
string reverse(string str)
{
  string s;
  for(int i = str.length()-1;i>=0;i--)
  {
    s = s+str.at(i);
  }
  return s;
}