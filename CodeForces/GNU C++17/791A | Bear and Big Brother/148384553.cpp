 
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a , b;
    int flag = 0;
    cin>>a>>b;
    if (a==b)
    cout<<1;
    else
    {
    while(a<=b)
    {
        a=a*3;
        b= b*2;
        flag++;
    }
    
    cout<<flag<<endl;
    
}
}