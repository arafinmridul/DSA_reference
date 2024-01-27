#include<iostream>
using namespace std;
#include<climits>

//Minimum number of squares whose sum equals to given number 'x'

//Recurrence relation, f(x) = min(f(x-i*i)+1) [i varies from 1 to sqrt(x)]

//This problem follows overlapping subproblem property
//Thus it can be solved by Dynamic Programming

/*Algorithm
1. Write the recursion solution
2. Memoize it in dp table
*/

/*
//0 = 0^2
//1 = 1^2
//2 = 1^2+1^2
//4 = 2^2
//26 = 5^2+1^2
*/

const int N = 1e5+2;
int dp[N];

int minSquare(int x){
    if(x == 0 || x == 1 || x == 2 || x == 3){
        return x;
    }

    if(dp[x] != INT_MAX){
        return dp[x];
    }

    for(int i=1; i*i<=x; ++i){
        dp[x] = min(dp[x], 1 + minSquare(x-i*i));
    }

    return dp[x];

}

int main(){

    int n; cin >> n;

    for(int i=0; i<N; ++i){
        dp[i] = INT_MAX;
    }

    cout << minSquare(n) << endl;

}