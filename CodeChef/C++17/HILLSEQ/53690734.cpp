#include <bits/stdc++.h>
#include<map>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
        cin.tie (NULL); 
       cout.tie (NULL) ;
int t;
cin >> t;

    
    while(t--)
    {
        int n ;
        cin>>n;
        bool flag = true;
        map<long long int , long long int >arrange;
        for(int i =0;i<n;i++)
        {
            int temp;
            cin>>temp;
            arrange[temp]++;
        }
        for(auto x : arrange)
        {
            auto j = arrange.rbegin();
            if(j->second==2)
            {
                cout<<"-1"<<endl;
                flag = false;
                break;
            }
            else if(x.second>2)
            {
                cout<<"-1"<<endl;
                flag = false;
                break;
            }
            }
        if(flag== true)
        {
            for(auto x : arrange)
            {
                if(x.second==2) 
                cout<<x.first<<" ";
            }
            for(auto k = arrange.rbegin(); k!=arrange.rend();k++)
            {
                cout<<k->first<<" ";
            }
            cout<<endl;
        }
    }
        
        
    }