#include <bits/stdc++.h>

using namespace std;

int main() {
    int t ;
    cin>>t;
    while(t--)
    {
        long long  n , s;
        cin>>n>>s;
        long long sum = ((n*(n+1))/2) - s;
        if(sum>n)
        cout<<-1<<endl;
        else if(sum<=0)
        cout<<-1<<endl;
        
        
        else
        cout<<sum<<endl;
    }
    return 0;
}