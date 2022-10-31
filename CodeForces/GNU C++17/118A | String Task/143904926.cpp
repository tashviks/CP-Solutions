#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    string s ;
    cin>>s;
    string str = "";
    for(int i =0;i<s.length();i++)
    {
        if(s.at(i)=='a'||s.at(i)=='e'||s.at(i)=='i'||s.at(i)=='o'||s.at(i)=='u'||s.at(i)=='y'||s.at(i)=='A'||s.at(i)=='E'||s.at(i)=='O'||s.at(i)=='I'||s.at(i)=='U'||s.at(i)=='Y')
        continue;
        else{
            cout<<".";
            cout<<(char)tolower(s.at(i));
        } 
        
    }
    cout<<endl;
}