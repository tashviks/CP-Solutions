#include<bits/stdc++.h>
using namespace std;
int  main ()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
    
        int T;
        cin>>T;
        while(T--)
        {
            int n;
            cin>>n;
            int arr[n];
            for(int i=0;i<n;i++)
                cin>>arr[i];
            int v[n+1][n];
            for(int i=0;i<n;i++)
            {
                v[0][i]=arr[i];
            }    
            for(int i=1;i<=n;i++)
            {
                map<int,int> m;
                for(int i=0;i<n;i++)
                {
                    m[arr[i]]++;
                }
 
                for(int j=0;j<n;j++)
                {
                    arr[j]=m[arr[j]];
                    v[i][j]=arr[j];
                }
 
            }
            int q;
            cin>>q;
            while(q--)
            {
                int x,k;
                cin>>x>>k;
                x--;
                if(k<=n)
                {
                    cout<<v[k][x]<<endl;
                }
                else
                {
                    cout<<v[n][x]<<endl;
                }
            }
            
        }
    
 
    return 0;
}