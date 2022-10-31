#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t ;
    cin>>t;
    while(t--)
    {
        int n ;
        cin>>n;
        char arr[n];
        for(int i =0;i<n;i++)
        cin>>arr[i];
        int countB =0 , countW =0;
        for(int i =0;i<n;i++)
        {
            if(arr[i]=='B')
            {
                if(arr[i+1]!='B')
                countB++;
            }
            else
            {
                if(arr[i+1]!='W')
                countW++;
            }
            
        }
        if(countB>countW)
        cout<<countW<<endl;
        else
        cout<<countB<<endl;
        }
    }
