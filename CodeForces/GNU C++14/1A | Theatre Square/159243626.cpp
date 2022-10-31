#include <bits/stdc++.h>
 
using namespace std;
 
#define ll long long
typedef vector<ll> vll;
#define speed                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
 
int main()
{
    speed;
   
        ll n , m , a;
  cin>>n>>m>>a;
  float horizontal , vertical;
  if(n % a != 0)
   horizontal = ceil((double)n/a);
 else
  horizontal = n/a;
 
if(m % a != 0)
   vertical = ceil((double)m/a);
   else
    vertical = m/a;
  ll total = horizontal*vertical;
  if(total == 0)
    cout<<1<<endl;
  else
  cout<<total<<endl;
}