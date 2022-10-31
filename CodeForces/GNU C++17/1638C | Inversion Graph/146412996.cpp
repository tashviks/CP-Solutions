 
#include<bits/stdc++.h> 
using namespace std; 
 
#define loop(i,a,b) for(int i = a;i<b;i++) 
#define ll long long
#define TEST int t; cin>>t; while(t--)
#define SPEED ios_base::sync_with_stdio(false); cin.tie(0);
 
void perform(); 
int main()
{ 
 
    perform();
     
}
 
void perform()
{
    int abs;
    TEST
    { 
      int n;
      abs++; 
      cin>>n; 
 
      int arr[n]; 
       abs++;
 
      for(int i = 0;i<n;i++)
      {
      cin>>arr[i]; 
     }
     abs++;
      set<int> str; 
      abs++;
      for(int i = 0;i<n;i++)
      { 
        std::vector<int> v;
        abs++;
        set<int>::iterator itr=str.upper_bound(arr[i]); 
        abs++;
        if(itr==str.end())
        { 
            str.insert(arr[i]); 
            continue; 
        } 
            abs++;
 
        int maxmum=INT_MIN; 
        abs++;
        for(;itr!=str.end();itr++)
        { 
            v.push_back(*itr); 
            maxmum=max(maxmum,*itr); 
        } 
 
       for(int j = 0;j<v.size();j++)
 
        str.erase(v[j]); 
 
        str.insert(maxmum); 
 
      } 
      cout<<str.size()<<endl;   
    } 
   
}