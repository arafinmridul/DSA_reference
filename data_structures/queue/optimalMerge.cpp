#include<iostream>
using namespace std;

//You are given n files with their computation times in an array
//Operation: Choose/take any two files, add their computation times and append it to the
//list of computation times.[Cost = Sum of computation time]
//Do this until we are left with only one file in the array.
//We have to do this operation such that we get minimum cost finally.

#include<queue>
#include<vector>

int main(){
    int n; cin>>n;
    vector<int>v(n);
    for(int i=0; i<n; ++i){
        cin >> v[i];
    }

    priority_queue<int,vector<int>,greater<int>>minheap;
    for(int i=0; i<n; ++i){
        minheap.push(v[i]);
    }

    int ans = 0;
    while(minheap.size() > 1){
        int e1 = minheap.top();
        minheap.pop();
        int e2 = minheap.top();
        minheap.pop();

        ans += e1+e2;
        minheap.push(e1+e2);
    }

    cout << ans << endl;

}