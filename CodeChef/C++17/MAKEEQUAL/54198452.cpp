#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int t ;
	cin>>t;
	while(t--)
	{
	    int n ;
	    cin>>n;
	    int a[n];
	    for(int i =0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    int mn = INT_MAX;
	    int mx = INT_MIN;
	    for(int i=0;i<n;i++)
	    {
	        mx = max(mx , a[i]);
	        mn = min(mn , a[i]);
	    }
	    if(mx==mn)
	    cout<<0<<endl;
	    else
	    cout<<mx-mn<<endl;
	}
	return 0;
}
