#include <iostream> 
using namespace std; 
 
int main() { 
 // your code goes here 
 int t; 
 cin>>t; 
 while(t--){ 
     int n; 
     cin>>n; 
     string a,b; 
     cin>>a>>b; 
     bool bigb; 
     int ans=0; 
     bigb=b[n-1]>a[n-1]; 
     if(bigb){ 
         ans++; 
     } 
     for(int i=n-2;i>=0;i--){ 
         if(b[i]>a[i]){ 
             bigb=true; 
             ans++; 
         } 
         else if(b[i]<a[i]){ 
             bigb=false; 
         } 
         else{ 
             if(bigb){ 
                 ans++; 
             } 
              
         } 
     } 
     cout<< ans <<endl; 
 } 
 return 0; 
}