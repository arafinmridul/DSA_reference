#include<iostream>
using namespace std;

void dnfSort(int a[],int l,int h){
    int mid=l;
    while(mid<=h){
        if(a[mid]==1) mid++;
        else if(a[mid]==0){
            swap(a[l],a[mid]);
            l++; mid++;
        }
        else if(a[mid]==2){
            swap(a[mid],a[h]);
            h--;
        }
    }
    return;
}

int main(){

    int n = 9;
    int arr[n] = {2,0,2,1,0,1,2,1,2};

    dnfSort(arr,0,n-1);

    for(auto e:arr) cout<<e<<' ';
    cout<<endl;

    return 0;
}