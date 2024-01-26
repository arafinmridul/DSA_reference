#include<iostream>
using namespace std;

void waveSort(int arr[], int n){
    for(int i=1; i<n; i+=2){
        if(arr[i]>arr[i-1]) swap(arr[i],arr[i-1]);
        if(arr[i]>arr[i+1] && i<=n-2) swap(arr[i],arr[i+1]);
    }
}

int main(){

    int a[] = {3,4,8,6,7,9,2};

    waveSort(a,7);

    for(auto e:a) cout<<e<<' ';
    cout<<'\n';

    return 0;
}