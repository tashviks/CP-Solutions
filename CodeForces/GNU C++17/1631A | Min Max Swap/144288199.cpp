#include <bits/stdc++.h> 
 
//1631A
 
using namespace std;
 
// JAI BAJRANG BALI QUESTION DEKH K MERI FATI // 
//GOAL : ITNI CP AA JAAYE KI MAZA AA JAAYE//
 
#define MAKASAM ios_base::sync_with_stdio(0);cin.tie(0); cout.tie(0);
 
#define TEST_HAI_KAL int t; cin>>t; while(t--)
 
#define ll long long
 
#define ld long double
 
#define arrayloop for(int i =0;i<(sizeof(arr)/sizeof(arr[0]));i++)
 
#define szof(x) ((int)x.size())
 
#define pb push_back
 
#define khatam exit(0);
 
#define allof(a) (a).begin(), (a).end()
 
#define popb pop_back 
 
#define mp(a,b) make_pair(a,b)
 
#define aofp_ll pair<ll,ll>a[n];
 
#define vofp_ll vector<pair<ll , ll>> v;
 
#define ascend(a) sort(a , a+n);
 
#define loop(i ,a , b) for (ll i = a; i < b; i++)
 
const int MAX = 1e5 + 5;
 
const ll MODULO = 1e9 + 7;
 
const ll INFINITE = 1e9;
 
const ld EP = 1e-9;
 
int main() {
 
        MAKASAM
 
        TEST_HAI_KAL
        {
        int n;
 
        cin >> n;
 
        vector<int> a(n), b(n);
 
        for (auto& it : a) 
        {
 
            cin >> it;
 
        }
 
        for (auto& it : b) 
        {
 
            cin >> it;
 
        }
 
        for (size_t i = 0; i < n; i++) 
        {
 
            if (a[i] < b[i]) 
            {
 
                std::swap(a[i], b[i]);
 
            }
 
        }
 
        cout << (*max_element(a.begin(), a.end())) * (*max_element(b.begin(), b.end())) << endl;
 
    }
}