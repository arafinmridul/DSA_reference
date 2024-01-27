#include <iostream>
using namespace std;

int getBit(int n, int pos){
    return ((n & (1<<pos))!=0);
    //if not zero will return true or 1
}

int setBit(int n, int pos){
    return (n | (1<<pos));
}

int clearBit(int n, int pos){
    int mask = ~(1<<pos);
    return (n & mask);
}

int updateBit(int n, int pos, int newBit){
    int nNew = n & (~(1<<pos)); //clearBit
    return (nNew | (newBit<<pos)); //setBit
}

int main(){

    cout<<getBit(5,2)<<endl; //0101 and 2

    cout<<setBit(5,1)<<endl; //0101 and 1

    cout<<clearBit(5,2)<<endl; //0101 and 2

    cout<<updateBit(5,1,1)<<endl; //0101 and 1 and 1

    return 0;
}