#include <bits/stdc++.h>
 
using namespace std;
 
 
#define ar array
#define ll long long
#define ld long double
#define sza(x) ((int)x.size())
#define all(a) (a).begin(), (a).end()
#define SPEED ios_base::sync_with_stdio(false);cin.tie(NULL);
 
 
 
void compute() {
    int n;
    cin>>n;
    int a[n];
    vector <bool> p(1e6+1,0);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        p[a[i]]=1;
    }
    sort(a,a+n);
    vector<pair<int,int>>vec;
    for(int i=1;i<n;i++)
    {
        for(int j=0;j<i;j++) 
        {
            if(p[a[i]%a[j]]==0)
            vec.push_back({a[i],a[j]});
            if(vec.size()>=(n/2))
            break;
        }
        if(vec.size()>=(n/2))
        break;
    }
    for(int i=0;i<vec.size();i++)
    {
        cout<<vec[i].first<<" "<<vec[i].second<<"\n";
    }
}
 
int main() {
    SPEED;
    int t;
    cin >> t;
     while(t--)
        compute();
}