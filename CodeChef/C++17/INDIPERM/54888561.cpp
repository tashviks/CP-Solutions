#include <bits/stdc++.h>



#define GODSPEED ios_base::sync_with_stdio(0);cin.tie(0); cout.tie(0);
#define ar array
#define END cout<<endl;
#define ll long long
#define ld long double
#define sza(x) ((int)x.size())
#define all(a) (a).begin(), (a).end()
const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;
using namespace std;
int main()
{
    GODSPEED;
    int t ;
    cin>>t;
    
    while(t--)
    {
        int n ;
        cin>>n;
       // This question can be solved extremely beautifully by physics lover and CP enthusiast 
       // Mr Tashvik has found a beautiful way to do it . 
       // What is to be done is that place n first and then the numbers 1 to n-1 . Now how will it work.
       // Think yourself , n>=2 so any number at first place cannot divide 1 completely unless it is 1
       // now just keep placing numbers from 1 to n-1 . As the mumbers will always be smaller that indexes , so 
       // the indexes will never be able to divide the numbers completely . Just keep doing this with a leap of faith
       // and always believe in the code you wrute for it to work as you want . This in itself is a beautiful statement.
       // And yes , I am doing these shenanigans even before I am done with my code because I believe that the code that I will write will work.
       // If it has been accepted and you are reading this , Just add me as your friend . ☺
       
       
       cout<<n<<" ";
       for(int i =1;i<n;i++)
       cout<<i<<" ";
       END;    //A new addition
       
        
    }
}