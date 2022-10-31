#include <bits/stdc++.h>

using namespace std;

#define GODSPEED ios_base::sync_with_stdio(0);cin.tie(0); cout.tie(0);
#define ar array
#define ll long long
#define ld long double
#define sza(x) ((int)x.size())
#define all(a) (a).begin(), (a).end()
const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

int main()
{
GODSPEED;
int t;
cin >> t;
while (t--)
{
    int n,m;
    string str;
    cin >> n >> m;
    if(n>m)
    {
        int dif = n-m;
        while (m!=0)
        {
            str += "01";
            m--;
        }
        while (dif!=0)
        {
            str += "010";
            dif--;
        }   
    }
    else if(m>n)
    {
        int dif = m-n;
        while (n!=0)
        {
            str+= "10";
            n--;
        }
        while (dif!=0)
        {
            str += "101";
            dif--;
        }   
    }
    else
    {
        while (n+1!=0)
        {
            str += "01";
            n--;
        }

    }

    cout << str.size() << endl;
    cout << str << endl;
}


return 0;
}
