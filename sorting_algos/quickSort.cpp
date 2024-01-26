#include<iostream>
using namespace std;

int partition(int arr[],int l,int r){
    int pivot = arr[r];
    int i = l-1;
    for(int j=l; j<r; j++){
        if(arr[j]<pivot){
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[r]);
    return i+1;
}

void quickSort(int arr[],int l,int r){
    if(l<r){
        int pi = partition(arr,l,r);
        quickSort(arr,l,pi-1);
        quickSort(arr,pi+1,r);
    }
}

int main(){

    int a[] = {6,3,9,5,2,8,7};
    quickSort(a,0,6);

    for(auto e:a) cout<<e<<' ';
    cout<<endl;

    return 0;
}