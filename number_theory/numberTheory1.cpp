#include<iostream>
using namespace std;

//EXTENDED EUCLID ALGORITHM

/*Diophantine Equations -
equation involving only sums, products and powers in which all the constants are integers and the only
solutions of interest are integers. For example, 3x + 7y = 1 or x2 − y2 = z3, where x,y,z are integers.
*/

/*In competitive programming we deal with linear Diophantine Equations, ax + by = c.
**Note : a,b,c belong to Integers(N) and solutions to these equations only exist if
gcd(a,b) divides c.
*/

/*gcd(a,b) has a property that ax + by = gcd(a,b)
Let's do some maths,
ax + by = gcd(a,b);
gcd(a,b) = gcd(b,a%b);
gcd(b,a%b) = bx1 + (a%b)y1;
a%b = a - (a/b)*b;
From above relations,
ax + by = bx1 + (a%b)y1;
ax + by = bx1 + (a-(a/b)*b)y1;
ax + by = ay1 + b(x1-(a/b)y1);
Comparing the coefficients of a and b,
x = y1;
y = x1 - (a/b)*y1;
*/

/*
gcd(p,0) = p;
ax + 0 = gcd(a,0) = a;
=> x = 1;
since b=0, y is not bothering, let's say y=0;
*/

struct triplet{
    int x,y,gcd;
};

triplet xEuclid(int a,int b){
    if(b==0){
        triplet ans;
        ans.x = 1;
        ans.gcd = a;
        ans.y = 0;
        return ans;
    }
    triplet smallAns = xEuclid(b,a%b);
    triplet ans;
    ans.gcd = smallAns.gcd;
    ans.x = smallAns.y;
    ans.y = smallAns.x-(a/b)*smallAns.y;
    return ans;
}

int main(){

    int a,b; cin>>a>>b;

    triplet res = xEuclid(a,b);
    cout<<res.x<<' '<<res.y<<' '<<res.gcd<<endl;

    return 0;
}

