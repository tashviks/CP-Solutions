#include<bits/stdc++.h>
using namespace std;
#define RAFTAAR  ios_base::sync_with_stdio(0); cin.tie(0);
int main() {
  RAFTAAR
  int t; cin >> t;
  while (t--)
  {
    int x, y; cin >> x >> y;
    if (x <= y) 
    {
      cout << y - y % x / 2 <<endl;
    }
    else {
      cout << x + y <<endl;
    }
  }
  return 0;
}