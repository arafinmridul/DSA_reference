#include<iostream>
using namespace std;

/*//Calculating 3^13
//breaking 13 -
//13's binary representation - 1101 means 8+4+0+1;
3^13 = 3^8 * 3^4 * 3^0 * 3^1 = 3^8 * 3^4 * 3^1;
*/

const int M = 1e9+7;

int binExpoIter(int a, int b){
    int ans = 1;
    while(b){
        if(b&1){
            ans = (ans*1LL*a)%M;
        }
        a = (a*1LL*a)%M;
        b>>=1; //dividing b by 2;
    }
    return ans;
}

int main(){
    cout<<binExpoIter(2123123,1231231)<<endl;
}