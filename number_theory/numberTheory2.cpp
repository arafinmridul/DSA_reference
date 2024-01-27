#include<bits/stdc++.h>
using namespace std;

//MULTIPLICATIVE MODULO INVERSE

/*Consider the equation => (A*B)%m = 1;
A and m are given. B is to be found.
*/
//Multiplicative modulo inverse only exist if A and m are coprime or gcd(A,m)=1;

struct triplet{
    int x,y,gcd;
};

triplet xEuclid(int a, int b){
    if(b==0){
        triplet ans;
        ans.x = 1;
        ans.gcd = a;
        ans.y = 0;
        return ans;
    }
    triplet smallAns = xEuclid(b,a%b);
    triplet ans;
    ans.x = smallAns.y;
    ans.gcd = smallAns.gcd;
    ans.y = smallAns.x-(a/b)*smallAns.y;
    return ans;
}

// AB + mQ = gcd(A,m); B or x(ax+by=gcd(a,b)) is to be returned.

int multiModInv(int A, int m){
    triplet res = xEuclid(A,m);
    return res.x;
}


int main(){

    int A,m; cin>>A>>m;

    cout<<multiModInv(A,m)<<endl;

    return 0;
}