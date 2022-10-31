#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n ;
    cin>>n;
    int flag = 0;
    while(n>0)
    { 
    n = n-5;
    flag++;
    }
    
    cout<<flag<<endl;
}