#include <bits/stdc++.h>
using namespace std;
int main()
{
 
 string str1 , str2;
 int flag1=0 , flag2=0 , flagequal=0;
 cin>>str1>>str2;
      transform(str1.begin(), str1.end(), str1.begin(), ::toupper);
      transform(str2.begin(), str2.end(), str2.begin(), ::toupper);
for(int i =0;i<str1.length();i++)
{
 if((int)str1.at(i)-32<(int)str2.at(i)-32)
 {
  cout<<-1;
  break;
 }
 else if((int)str1.at(i)-32>(int)str2.at(i)-32)
  {
     cout<<1; 
     break;
  }
     else if((int)str1.at(i)-32==(int)str2.at(i)-32)
       flagequal++;
}
 
 if (flagequal==str1.length()){cout<<0;}
}