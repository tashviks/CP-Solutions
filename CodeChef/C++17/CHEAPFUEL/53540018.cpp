#include <iostream>
using namespace std;

int main() {
int n ;
cin>> n;
while(n--)
{
    int x , y , a , b , k;
    cin>>x>>y>>a>>b>>k;
    if(x==y && a==b)
    {
        cout<<"SAME PRICE"<<endl;
    }
    
    else
    {
   for(int i =0;i<k;i++)
   {
       x = x+a;
       y = y+b;
   }
   if(x==y)
    cout<<"SAME PRICE"<<endl;
    else if (x<y)
     cout<<"PETROL"<<endl;
     else
      cout<<"DIESEL"<<endl;
    }
}
return 0;
}
   
