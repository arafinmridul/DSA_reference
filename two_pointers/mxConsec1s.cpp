#include<iostream>
using namespace std;

//Two Pointers Problem

//max consecutive ones
//array contains 0s and 1s, can change k 0s to 1s
//then what is the max length of consecutive ones

//test cases
//1 0 0 0 1 1 1 0 1 1; k=2;
//0 0 1 1 0 1 1 1 0 0 0 1; k=3;

//when j increases, size of window increases
//when i increases, size of window decreases

int main(){
    int n,k; cin>>n>>k;
    int a[n]; for(auto &e:a)cin>>e;

    int zero=0,mx1s=0,i=0;
    for(int j=0; j<n; ++j){
        if(a[j]==0) zero++;
        while(zero>k){
            if(a[i]==0) zero--;
            i++;
        }
        mx1s = max(mx1s,j-i+1);
    }
    cout << mx1s << '\n';
}