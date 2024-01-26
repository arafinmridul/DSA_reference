#include<bits/stdc++.h>
using namespace std;

//MODULAR ARITHMETIC

/*FORMULAE
(a+b)%m = ((a%m)+(b%m))%m;
(a*b)%m = ((a%m)*(b%m))%m;
(a-b)%m = ((a%m)-(b%m)+m)%m;
(a/b)%m = ((a%m)*(b^-1)%m)%m; here, b^-1 is multiplicative modulo inverse, b^-1 is determined by binary exponentiation or modular exponentiation
*/

/*QUESTION
Given a number N. Print its factorial.
Constraints, 1<=N<=100;
Print ans modulo M, M = 47;
*/

/*Significance of 10^7+9
//This is the closest prime number to 10^9,
so if any value greater than this will come out in modulo
and can be stored in int datatype;
*/


int main(){
    const int M = 200;    

    int n; cin>>n; long long facto=1;
    for(int i=2; i<=n; ++i) facto = (facto*i)%M;
    cout<<facto<<'\n';
    

    return 0;
}