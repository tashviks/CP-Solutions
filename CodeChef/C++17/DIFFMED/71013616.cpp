#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int test;
    cin >> test;
    int level = 0;
    while(test--){
        int n;
        level++;
        cin>>n;
        int l=1;
        level++;
        int r=n;
        level++;
        while(l<r){
            cout<<r<<" "<<l<<" ";
            l++;
            r--;
        }
        if(n&1)
        {
            int ans = l;
            cout<<ans;
            level++;
        } 
        cout << "\n";
    }
    
}