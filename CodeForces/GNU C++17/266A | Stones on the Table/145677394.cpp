#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n ;
    string str;
    cin>>n;
    cin>>str;
    int flag = 0;
    for(int i =0;i<n-1;i++)
    {
        if(str.at(i)==str.at(i+1))
        {
            flag++;
            
        }
    }
    cout<<flag;
}