#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
#include<cstring>

//Longest Increasing Subsequence

const int N = 25e2+9;
vector<int> a(N);

//dimensions of dp[][] depends on the num of changing states of the recursion
int dp[N];

//first brute force recursion
//then memoization
int LIS(int idx){
    if(dp[idx] != -1){
        return dp[idx];
    }
    int ans = 1;
    for(int i=0; i<idx; ++i){
        if(a[idx] > a[i]){
            ans = max(ans, LIS(i) + 1);
        }
    }
    return dp[idx] = ans;
}

int main(){
    int n; cin >> n;
    for(int i=0; i<n; ++i)
        cin >> a[i];

    memset(dp, -1, sizeof dp);

    int res = 1;    
    for(int i=0; i<n; ++i){
        res = max(res, LIS(i));
    }

    cout << res << endl;
}