#include <bits/stdc++.h>
using namespace std;

int main()

{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int a , b;
    cin>>a>>b;
    int count = 0;
    while(a--)
    {
        int n ;
        cin>>n;
        if(n%b==0)
        count++;
        
    }
    cout<<count<<endl;
    return 0;
}