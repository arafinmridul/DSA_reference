#include<iostream>
using namespace std;
#include<cmath>
#include<iomanip>

//BINARY EXPONENTIATION

const int M = 1e9+7;

int binExpoRecur(int a, int b){
    if(!b) return 1;
    int temp = binExpoRecur(a,b/2);
    if(b&1) return (a*((temp*1LL*temp)%M))%M;
    else return (temp*1LL*temp)%M;
}

int main(){
    //double can't store value accurately
    double d = 1e24;
    cout<<fixed<<setprecision(30)<<d<<'\n';
    
    cout<<setprecision(3);
    //pow function stores value in double datatype
    cout<<pow(2,3)<<'\n';

    //O(N) complexity
    int a=2, b=3, ans=1;
    for(int i=0; i<3; ++i){
        ans*=a; ans%=M;
    }
    cout<<ans<<endl;

    //Divide & Conquer and Binary Exponentiation method
    //O(logN method)
    cout<<binExpoRecur(4,3)<<endl;
    


}