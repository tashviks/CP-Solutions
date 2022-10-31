#include <bits/stdc++.h>

using namespace std;

int main() {
    int t ;
    cin>>t;
    while(t--)
    {
        float n , k;
        cin>>n>>k;
        float sum = n/k;
        cout<<ceil(sum)<<endl;
    }
}