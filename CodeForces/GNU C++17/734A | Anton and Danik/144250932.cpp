#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s ;
    cin>>s;
    int A = 0 , D = 0;
    
    for(int i =0;i<n;i++)
    {
        if(s.at(i)=='A')
        A++;
        else
        D++;
    }
    if(A>D) cout<<"Anton";
    else if(A<D) cout<<"Danik";
    else
    cout<<"Friendship";
    
}