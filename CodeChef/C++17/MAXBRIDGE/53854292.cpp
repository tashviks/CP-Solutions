#include<bits/stdc++.h>

using namespace std;

int main(){

int t;

cin>>t;

while(t--){

    int n,m;
    
    cin>>n>>m;
    
    map<int ,int> x;
    
    for(int i=1;i<n;i++){
    
        x[i]=i+1;
        
        cout<<i<<" "<<i+1<<"\n";
        
        m=m-1;
        
    }
    
    int last=3;
    
    while(m>0){
    
        for(int i=1;i<last;i++){
        
            if (x[i]<last){
            
                x.insert (std::pair<int,int>(i,last));
                
                cout<<i<<" "<<last<<"\n";
                
                m=m-1;
                
                if(m==0){
                
                    break;
                    
                }}}
                
        last=last+1;
        
    }}}
