#include<bits/stdc++.h>
#include<vector>
#define ll long long
using namespace std;
int maxind(vector<int>a);
int main()
{
    int t; ll ans = 0;
    cin>>t;
    while(t--)
    {
        int n ;
        cin>>n;
        int arr[n];
        vector<int>a;
        a.resize(n);
        for(int i =0;i<n;i++)
        {
       cin>>a[i];
        }
        
        int mx = a[maxind(a)];
        //stores Maximum element 
        int cur = n-1;
        ans = 0;            
        while(a[cur] != mx)
        {
            int i = cur-1;
            while(a[i] <= a[cur])
            {
            i--;
            }
            cur=i;
            ans++;
        }
        cout<<ans<<endl;
    }
}
int maxind(vector<int>a)
{
    int max = max_element(a.begin() , a.end())-a.begin();
    return max;
}