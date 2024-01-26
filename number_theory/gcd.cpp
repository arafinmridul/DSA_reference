#include <iostream>
using namespace std;
#include <algorithm>

//Greatest Common Divisor

int gcd(int x, int y){
    int m = max(x,y);
    int n = min(x,y);

    while(m%n != 0){
        int temp = n;
        n = m%n;
        m = temp;
    }
    return n;
}

int main(){

    int a,b;
    cin>>a>>b;

    cout<<gcd(a,b)<<"\n";

    return 0;
}