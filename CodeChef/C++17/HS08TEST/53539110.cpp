#include <iostream>
using namespace std;

int main() {
    int x;
    float y;
    cin>>x>>y;
    if((x+0.50<=y) && (x%5==0)){
        cout<<(y-x-0.50);
    }
    else{
        cout<<y;
    }
	return 0;
}
