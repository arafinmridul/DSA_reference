#include<iostream>
using namespace std;
#include<cstring>

//0 based nth fibonacci number
//0 1 1 2 3 5 8 13...

const int N = 1e5+2;
//Top Down Approach
int dp[N];

//Bottom Up Approach
int DP[N];

//time complexity will be reduced from O(2^n) to O(n)
//and O(n!) to O(2^n)
//generally by using dp time complexity becomes linear from exponential
//i.e. O(2^y) to O(y) or, O(y!) to O(2^y)

int fib(int n){
    if(n == 0)
        return 0;
    if(n == 1)
        return 1;
    if(dp[n] != -1)
        return dp[n]; //this is memoization

    return dp[n] = fib(n-1) + fib(n-2);
    //by this line it will be stored and returned
}

int main(){
    memset(dp, -1, sizeof(dp));

    int n; cin >> n;

    //Top Down Approach
    cout << fib(n) << endl;

    //Bottom Up Approach
    DP[0] = 0;
    DP[1] = 1;
    for(int i=2; i<=n; ++i){
        DP[i] = DP[i-1] + DP[i-2];
    }
    cout << DP[n] << endl;

}